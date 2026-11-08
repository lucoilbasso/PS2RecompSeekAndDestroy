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

// Function: caseD_23
// Address: 0x166090 - 0x1660d8
void caseD_23_0x166090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_23_0x166090");
#endif

    switch (ctx->pc) {
        case 0x166090u: goto label_166090;
        case 0x166094u: goto label_166094;
        case 0x166098u: goto label_166098;
        case 0x16609cu: goto label_16609c;
        case 0x1660a0u: goto label_1660a0;
        case 0x1660a4u: goto label_1660a4;
        case 0x1660a8u: goto label_1660a8;
        case 0x1660acu: goto label_1660ac;
        case 0x1660b0u: goto label_1660b0;
        case 0x1660b4u: goto label_1660b4;
        case 0x1660b8u: goto label_1660b8;
        case 0x1660bcu: goto label_1660bc;
        case 0x1660c0u: goto label_1660c0;
        case 0x1660c4u: goto label_1660c4;
        case 0x1660c8u: goto label_1660c8;
        case 0x1660ccu: goto label_1660cc;
        case 0x1660d0u: goto label_1660d0;
        case 0x1660d4u: goto label_1660d4;
        default: break;
    }

    ctx->pc = 0x166090u;

label_166090:
    // 0x166090: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_166094:
    // 0x166094: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x166094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_166098:
    // 0x166098: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16609c:
    // 0x16609c: 0x24c6af58  addiu       $a2, $a2, -0x50A8
    ctx->pc = 0x16609cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946648));
label_1660a0:
    // 0x1660a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1660a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1660a4:
    // 0x1660a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1660a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1660a8:
    // 0x1660a8: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x1660a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_1660ac:
    // 0x1660ac: 0xc0f809  jalr        $a2
label_1660b0:
    if (ctx->pc == 0x1660B0u) {
        ctx->pc = 0x1660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ACu;
        // 0x1660b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660B4u;
        goto label_1660b4;
    }
    ctx->pc = 0x1660ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1660B4u);
        ctx->pc = 0x1660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ACu;
        // 0x1660b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1660ACu, 0x1660B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1660B4u;
label_1660b4:
    // 0x1660b4: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_1660b8:
    // 0x1660b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1660bc:
    if (ctx->pc == 0x1660BCu) {
        ctx->pc = 0x1660BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660B8u;
        // 0x1660bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660C0u;
        goto label_1660c0;
    }
    ctx->pc = 0x1660B8u;
    {
        const bool branch_taken_0x1660b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1660b8) {
            ctx->pc = 0x1660BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1660B8u;
            // 0x1660bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1660D8u;
            return;
        }
    }
    ctx->pc = 0x1660C0u;
label_1660c0:
    // 0x1660c0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1660c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1660c4:
    // 0x1660c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1660c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1660c8:
    // 0x1660c8: 0xc068584  jal         func_1A1610
label_1660cc:
    if (ctx->pc == 0x1660CCu) {
        ctx->pc = 0x1660CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660C8u;
        // 0x1660cc: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660D0u;
        goto label_1660d0;
    }
    ctx->pc = 0x1660C8u;
    SET_GPR_U32(ctx, 31, 0x1660D0u);
    ctx->pc = 0x1660CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660C8u;
    // 0x1660cc: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1660C8u, 0x1660D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1660D0u;
label_1660d0:
    // 0x1660d0: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_1660d4:
    // 0x1660d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1660d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1660d8u;
}
