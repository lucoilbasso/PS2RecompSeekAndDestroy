#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001776fc
// Address: 0x1776fc - 0x177758
void entry_001776fc_0x1776fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001776fc_0x1776fc");
#endif

    ctx->pc = 0x1776fcu;

    // 0x1776fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1776fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177700: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177704: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x177704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x177708: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17770c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x177710: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x177710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177714: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x177718: 0x2463e820  addiu       $v1, $v1, -0x17E0
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961184));
    // 0x17771c: 0x8ce60020  lw          $a2, 0x20($a3)
    ctx->pc = 0x17771cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x177720: 0x2463ffa4  addiu       $v1, $v1, -0x5C
    ctx->pc = 0x177720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967204));
    // 0x177724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x177724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x177728: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x177728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17772c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17772cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x177730: 0x90e30030  lbu         $v1, 0x30($a3)
    ctx->pc = 0x177730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x177734: 0x24c80018  addiu       $t0, $a2, 0x18
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x177738: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x177738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17773c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x17773cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x177740: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x177740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x177744: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177744u;
    {
        const bool branch_taken_0x177744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x177744) {
            ctx->pc = 0x177748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177744u;
            // 0x177748: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177758u;
            return;
        }
    }
    ctx->pc = 0x17774Cu;
    // 0x17774c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17774cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177750: 0x805dfa6  j           func_177E98
    ctx->pc = 0x177750u;
    ctx->pc = 0x177754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177750u;
    // 0x177754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    WPadSoftWareInit__Fi_0x177e98(rdram, ctx, runtime); return;
    ctx->pc = 0x177758u;
}
