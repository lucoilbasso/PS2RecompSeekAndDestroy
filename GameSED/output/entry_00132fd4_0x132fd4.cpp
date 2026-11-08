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

// Function: entry_00132fd4
// Address: 0x132fd4 - 0x133010
void entry_00132fd4_0x132fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132fd4_0x132fd4");
#endif

    switch (ctx->pc) {
        case 0x132fe4u: goto label_132fe4;
        default: break;
    }

    ctx->pc = 0x132fd4u;

label_132fd4:
    // 0x132fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132fd8:
    // 0x132fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_132fdc:
    // 0x132fdc: 0xc06a26e  jal         func_1A89B8
label_132fe0:
    if (ctx->pc == 0x132FE0u) {
        ctx->pc = 0x132FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FDCu;
        // 0x132fe0: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FE4u;
        goto label_132fe4;
    }
    ctx->pc = 0x132FDCu;
    SET_GPR_U32(ctx, 31, 0x132FE4u);
    ctx->pc = 0x132FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FDCu;
    // 0x132fe0: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132FDCu, 0x132FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FE4u;
label_132fe4:
    // 0x132fe4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132fe8:
    // 0x132fe8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x132fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_132fec:
    // 0x132fec: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
label_132ff0:
    if (ctx->pc == 0x132FF0u) {
        ctx->pc = 0x132FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FECu;
        // 0x132ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FF4u;
        goto label_132ff4;
    }
    ctx->pc = 0x132FECu;
    {
        const bool branch_taken_0x132fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132fec) {
            ctx->pc = 0x132FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132FECu;
            // 0x132ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1331B8u;
            return;
        }
    }
    ctx->pc = 0x132FF4u;
label_132ff4:
    // 0x132ff4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x132ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_132ff8:
    // 0x132ff8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x132ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_132ffc:
    // 0x132ffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_133000:
    // 0x133000: 0x8c636430  lw          $v1, 0x6430($v1)
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25648)));
label_133004:
    // 0x133004: 0x600008  jr          $v1
label_133008:
    if (ctx->pc == 0x133008u) {
        ctx->pc = 0x13300Cu;
        goto label_13300c;
    }
    ctx->pc = 0x133004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133004u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13300Cu;
label_13300c:
    // 0x13300c: 0x0  nop
    ctx->pc = 0x13300cu;
    // NOP
    ctx->pc = 0x133010u;
}
