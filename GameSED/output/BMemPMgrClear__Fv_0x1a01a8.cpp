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

// Function: BMemPMgrClear__Fv
// Address: 0x1a01a8 - 0x1a0214
void BMemPMgrClear__Fv_0x1a01a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrClear__Fv_0x1a01a8");
#endif

    ctx->pc = 0x1a01a8u;

    // 0x1a01a8: 0x8f878dd8  lw          $a3, -0x7228($gp)
    ctx->pc = 0x1a01a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1a01ac: 0x54e00004  bnel        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A01ACu;
    {
        const bool branch_taken_0x1a01ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a01ac) {
            ctx->pc = 0x1A01B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A01ACu;
            // 0x1a01b0: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A01C0u;
            goto label_1a01c0;
        }
    }
    ctx->pc = 0x1A01B4u;
    // 0x1a01b4: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a01b8: 0x8c47f640  lw          $a3, -0x9C0($v0)
    ctx->pc = 0x1a01b8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x23F640u));
    // 0x1a01bc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1a01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1a01c0:
    // 0x1a01c0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1a01c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1a01c4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a01c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a01cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a01ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a01d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a01d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a01d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a01d8: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1a01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1a01dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a01dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a01e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a01e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a01e8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1a01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1a01ec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1a01f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a01f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a01f4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a01f8: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1a01f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a01fc: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1a01fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a0200: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x1a0200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x1a0204: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a0204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a0208: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x1a0208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x1a020c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A020Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A020Cu;
        // 0x1a0210: 0xac43fff0  sw          $v1, -0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A020Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0214u;
}
