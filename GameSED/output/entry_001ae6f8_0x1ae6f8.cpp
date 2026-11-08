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

// Function: entry_001ae6f8
// Address: 0x1ae6f8 - 0x1ae75c
void entry_001ae6f8_0x1ae6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae6f8_0x1ae6f8");
#endif

    ctx->pc = 0x1ae6f8u;

    // 0x1ae6f8: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1ae6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1ae6fc: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x1ae6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ae700: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ae700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1ae704: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1ae704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ae708: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x1ae708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1ae70c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ae70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae710: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x1ae710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1ae714: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ae714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae718: 0x15430021  bne         $t2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AE718u;
    {
        const bool branch_taken_0x1ae718 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE718u;
        // 0x1ae71c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae718) {
            ctx->pc = 0x1AE7A0u;
            return;
        }
    }
    ctx->pc = 0x1AE720u;
    // 0x1ae720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae724: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1ae724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1ae728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae72c: 0x21f02  srl         $v1, $v0, 28
    ctx->pc = 0x1ae72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1ae730: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE730u;
    {
        const bool branch_taken_0x1ae730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae730) {
            ctx->pc = 0x1AE734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE730u;
            // 0x1ae734: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE75Cu;
            return;
        }
    }
    ctx->pc = 0x1AE738u;
    // 0x1ae738: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ae738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ae73c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1ae73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae740: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ae740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae744: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ae744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ae748: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ae748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ae74c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae750: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1ae750u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1ae754: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ae754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae758: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    ctx->pc = 0x1ae75cu;
}
