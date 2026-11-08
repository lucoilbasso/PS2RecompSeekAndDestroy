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

// Function: entry_0010a700
// Address: 0x10a700 - 0x10a790
void entry_0010a700_0x10a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a700_0x10a700");
#endif

    switch (ctx->pc) {
        case 0x10a728u: goto label_10a728;
        case 0x10a730u: goto label_10a730;
        default: break;
    }

    ctx->pc = 0x10a700u;

    // 0x10a700: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10a704: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x10a704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x10a708: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x10a708u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x10a70c: 0x24170011  addiu       $s7, $zero, 0x11
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x10a710: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a714: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x10a714u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    // 0x10a718: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a71c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x10a71cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a720: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A720u;
    SET_GPR_U32(ctx, 31, 0x10A728u);
    ctx->pc = 0x10A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A720u;
    // 0x10a724: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A720u, 0x10A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A728u;
label_10a728:
    // 0x10a728: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A728u;
    SET_GPR_U32(ctx, 31, 0x10A730u);
    ctx->pc = 0x10A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A728u;
    // 0x10a72c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A728u, 0x10A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A730u;
label_10a730:
    // 0x10a730: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a734: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x10a734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10a738: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x10a738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10a73c: 0x24660100  addiu       $a2, $v1, 0x100
    ctx->pc = 0x10a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x10a740: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x10a740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10a744: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x10a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x10a748: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x10a748u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10a74c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x10a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x10a750: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x10a750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10a754: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x10a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x10a758: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x10a758u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10a75c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x10a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x10a760: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x10a760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10a764: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x10a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x10a768: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x10a768u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x10a76c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x10a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x10a770: 0xdcc20030  ld          $v0, 0x30($a2)
    ctx->pc = 0x10a770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x10a774: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x10a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x10a778: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x10a778u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x10a77c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x10a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x10a780: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x10a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x10a784: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10A784u;
    {
        const bool branch_taken_0x10a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A784u;
        // 0x10a788: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a784) {
            ctx->pc = 0x10A85Cu;
            return;
        }
    }
    ctx->pc = 0x10A78Cu;
    // 0x10a78c: 0x0  nop
    ctx->pc = 0x10a78cu;
    // NOP
    ctx->pc = 0x10a790u;
}
