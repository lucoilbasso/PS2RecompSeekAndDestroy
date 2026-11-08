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

// Function: caseD_21
// Address: 0x165ff0 - 0x166034
void caseD_21_0x165ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_21_0x165ff0");
#endif

    switch (ctx->pc) {
        case 0x165ff0u: goto label_165ff0;
        case 0x165ff4u: goto label_165ff4;
        case 0x165ff8u: goto label_165ff8;
        case 0x165ffcu: goto label_165ffc;
        case 0x166000u: goto label_166000;
        case 0x166004u: goto label_166004;
        case 0x166008u: goto label_166008;
        case 0x16600cu: goto label_16600c;
        case 0x166010u: goto label_166010;
        case 0x166014u: goto label_166014;
        case 0x166018u: goto label_166018;
        case 0x16601cu: goto label_16601c;
        case 0x166020u: goto label_166020;
        case 0x166024u: goto label_166024;
        case 0x166028u: goto label_166028;
        case 0x16602cu: goto label_16602c;
        case 0x166030u: goto label_166030;
        default: break;
    }

    ctx->pc = 0x165ff0u;

label_165ff0:
    // 0x165ff0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x165ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
label_165ff4:
    // 0x165ff4: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x165ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_165ff8:
    // 0x165ff8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165ffc:
    // 0x165ffc: 0x24c673e0  addiu       $a2, $a2, 0x73E0
    ctx->pc = 0x165ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29664));
label_166000:
    // 0x166000: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x166000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_166004:
    // 0x166004: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x166004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_166008:
    // 0x166008: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x166008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_16600c:
    // 0x16600c: 0xc0f809  jalr        $a2
label_166010:
    if (ctx->pc == 0x166010u) {
        ctx->pc = 0x166010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16600Cu;
        // 0x166010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166014u;
        goto label_166014;
    }
    ctx->pc = 0x16600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x166014u);
        ctx->pc = 0x166010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16600Cu;
        // 0x166010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16600Cu, 0x166014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166014u;
label_166014:
    // 0x166014: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x166014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166018:
    // 0x166018: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_16601c:
    if (ctx->pc == 0x16601Cu) {
        ctx->pc = 0x16601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166018u;
        // 0x16601c: 0x8e060c04  lw          $a2, 0xC04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166020u;
        goto label_166020;
    }
    ctx->pc = 0x166018u;
    {
        const bool branch_taken_0x166018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166018) {
            ctx->pc = 0x16601Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166018u;
            // 0x16601c: 0x8e060c04  lw          $a2, 0xC04($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166034u;
            return;
        }
    }
    ctx->pc = 0x166020u;
label_166020:
    // 0x166020: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_166024:
    // 0x166024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166028:
    // 0x166028: 0xc068584  jal         func_1A1610
label_16602c:
    if (ctx->pc == 0x16602Cu) {
        ctx->pc = 0x16602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166028u;
        // 0x16602c: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166030u;
        goto label_166030;
    }
    ctx->pc = 0x166028u;
    SET_GPR_U32(ctx, 31, 0x166030u);
    ctx->pc = 0x16602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166028u;
    // 0x16602c: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x166028u, 0x166030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166030u;
label_166030:
    // 0x166030: 0x8e060c04  lw          $a2, 0xC04($s0)
    ctx->pc = 0x166030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    ctx->pc = 0x166034u;
}
