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

// Function: Cmd_PLAYER_REMOTE_Entry__FP15BsSCDEntControl
// Address: 0x14d3c0 - 0x14d420
void Cmd_PLAYER_REMOTE_Entry__FP15BsSCDEntControl_0x14d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PLAYER_REMOTE_Entry__FP15BsSCDEntControl_0x14d3c0");
#endif

    switch (ctx->pc) {
        case 0x14d3d4u: goto label_14d3d4;
        case 0x14d3f8u: goto label_14d3f8;
        default: break;
    }

    ctx->pc = 0x14d3c0u;

    // 0x14d3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d3c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d3cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14D3CCu;
    SET_GPR_U32(ctx, 31, 0x14D3D4u);
    ctx->pc = 0x14D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3CCu;
    // 0x14d3d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14D3CCu, 0x14D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3D4u;
label_14d3d4:
    // 0x14d3d4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x14d3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d3e4: 0x8c503630  lw          $s0, 0x3630($v0)
    ctx->pc = 0x14d3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x14d3e8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14D3E8u;
    {
        const bool branch_taken_0x14d3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3e8) {
            ctx->pc = 0x14D3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D3E8u;
            // 0x14d3ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D414u;
            goto label_14d414;
        }
    }
    ctx->pc = 0x14D3F0u;
    // 0x14d3f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14D3F0u;
    SET_GPR_U32(ctx, 31, 0x14D3F8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14D3F0u, 0x14D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3F8u;
label_14d3f8:
    // 0x14d3f8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x14d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x14d3fc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x14d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14d400: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x14d400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14d404: 0x34851000  ori         $a1, $a0, 0x1000
    ctx->pc = 0x14d404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x14d408: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x14d408u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x14d40c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x14d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x14d410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d414:
    // 0x14d414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d418: 0x3e00008  jr          $ra
    ctx->pc = 0x14D418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D418u;
        // 0x14d41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D420u;
}
