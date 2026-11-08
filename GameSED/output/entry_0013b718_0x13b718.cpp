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

// Function: entry_0013b718
// Address: 0x13b718 - 0x13b760
void entry_0013b718_0x13b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b718_0x13b718");
#endif

    ctx->pc = 0x13b718u;

    // 0x13b718: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b71c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x13b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13b720: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x13b720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13b724: 0x10430075  beq         $v0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x13B724u;
    {
        const bool branch_taken_0x13b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B724u;
        // 0x13b728: 0x8e3e001c  lw          $fp, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b724) {
            ctx->pc = 0x13B8FCu;
            return;
        }
    }
    ctx->pc = 0x13B72Cu;
    // 0x13b72c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b730: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x13b730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x13b734: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x13b734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13b738: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x13B738u;
    {
        const bool branch_taken_0x13b738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B738u;
        // 0x13b73c: 0x692024  and         $a0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b738) {
            ctx->pc = 0x13B8FCu;
            return;
        }
    }
    ctx->pc = 0x13B740u;
    // 0x13b740: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13b740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13b744: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x13b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13b748: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x13b748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x13b74c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B74Cu;
    {
        const bool branch_taken_0x13b74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B74Cu;
        // 0x13b750: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b74c) {
            ctx->pc = 0x13B760u;
            return;
        }
    }
    ctx->pc = 0x13B754u;
    // 0x13b754: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x13b754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x13b758: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x13B758u;
    {
        const bool branch_taken_0x13b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B758u;
        // 0x13b75c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b758) {
            ctx->pc = 0x13B8FCu;
            return;
        }
    }
    ctx->pc = 0x13B760u;
}
