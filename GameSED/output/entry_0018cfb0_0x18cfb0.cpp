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

// Function: entry_0018cfb0
// Address: 0x18cfb0 - 0x18d004
void entry_0018cfb0_0x18cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cfb0_0x18cfb0");
#endif

    switch (ctx->pc) {
        case 0x18d000u: goto label_18d000;
        default: break;
    }

    ctx->pc = 0x18cfb0u;

    // 0x18cfb0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x18cfb4: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x18cfb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18cfbc: 0x5444001c  bnel        $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18CFBCu;
    {
        const bool branch_taken_0x18cfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x18cfbc) {
            ctx->pc = 0x18CFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CFBCu;
            // 0x18cfc0: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D030u;
            return;
        }
    }
    ctx->pc = 0x18CFC4u;
    // 0x18cfc4: 0x8e060238  lw          $a2, 0x238($s0)
    ctx->pc = 0x18cfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18cfc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cfcc: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x18cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x18cfd0: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x18cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x18cfd4: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x18cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x18cfd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18cfdc: 0x14850009  bne         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CFDCu;
    {
        const bool branch_taken_0x18cfdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x18CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFDCu;
        // 0x18cfe0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfdc) {
            ctx->pc = 0x18D004u;
            return;
        }
    }
    ctx->pc = 0x18CFE4u;
    // 0x18cfe4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18cfe8: 0x3228ffff  andi        $t0, $s1, 0xFFFF
    ctx->pc = 0x18cfe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x18cfec: 0x84c7001c  lh          $a3, 0x1C($a2)
    ctx->pc = 0x18cfecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x18cff0: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x18cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x18cff4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x18cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18cff8: 0xc05f292  jal         func_17CA48
    ctx->pc = 0x18CFF8u;
    SET_GPR_U32(ctx, 31, 0x18D000u);
    ctx->pc = 0x18CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFF8u;
    // 0x18cffc: 0x84c60018  lh          $a2, 0x18($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA48u, 0x18CFF8u, 0x18D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D000u;
label_18d000:
    // 0x18d000: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x18d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x18d004u;
}
