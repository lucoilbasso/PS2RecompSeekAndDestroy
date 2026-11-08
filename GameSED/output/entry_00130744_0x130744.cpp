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

// Function: entry_00130744
// Address: 0x130744 - 0x1307c8
void entry_00130744_0x130744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130744_0x130744");
#endif

    switch (ctx->pc) {
        case 0x13074cu: goto label_13074c;
        case 0x13075cu: goto label_13075c;
        case 0x13076cu: goto label_13076c;
        case 0x13077cu: goto label_13077c;
        case 0x13078cu: goto label_13078c;
        case 0x13079cu: goto label_13079c;
        case 0x1307b4u: goto label_1307b4;
        default: break;
    }

    ctx->pc = 0x130744u;

    // 0x130744: 0xc04844a  jal         func_121128
    ctx->pc = 0x130744u;
    SET_GPR_U32(ctx, 31, 0x13074Cu);
    ctx->pc = 0x130748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130744u;
    // 0x130748: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130744u, 0x13074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13074Cu;
label_13074c:
    // 0x13074c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130750: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x130750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    // 0x130754: 0xc04844a  jal         func_121128
    ctx->pc = 0x130754u;
    SET_GPR_U32(ctx, 31, 0x13075Cu);
    ctx->pc = 0x130758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130754u;
    // 0x130758: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130754u, 0x13075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13075Cu;
label_13075c:
    // 0x13075c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130760: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x130760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x130764: 0xc04844a  jal         func_121128
    ctx->pc = 0x130764u;
    SET_GPR_U32(ctx, 31, 0x13076Cu);
    ctx->pc = 0x130768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130764u;
    // 0x130768: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130764u, 0x13076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13076Cu;
label_13076c:
    // 0x13076c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130770: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x130770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x130774: 0xc04844a  jal         func_121128
    ctx->pc = 0x130774u;
    SET_GPR_U32(ctx, 31, 0x13077Cu);
    ctx->pc = 0x130778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130774u;
    // 0x130778: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130774u, 0x13077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13077Cu;
label_13077c:
    // 0x13077c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13077cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130780: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x130780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x130784: 0xc04844a  jal         func_121128
    ctx->pc = 0x130784u;
    SET_GPR_U32(ctx, 31, 0x13078Cu);
    ctx->pc = 0x130788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130784u;
    // 0x130788: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130784u, 0x13078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13078Cu;
label_13078c:
    // 0x13078c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130790: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x130790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x130794: 0xc04844a  jal         func_121128
    ctx->pc = 0x130794u;
    SET_GPR_U32(ctx, 31, 0x13079Cu);
    ctx->pc = 0x130798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130794u;
    // 0x130798: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130794u, 0x13079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13079Cu;
label_13079c:
    // 0x13079c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x13079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1307a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1307A0u;
    {
        const bool branch_taken_0x1307a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1307A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307A0u;
        // 0x1307a4: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307a0) {
            ctx->pc = 0x1307C8u;
            return;
        }
    }
    ctx->pc = 0x1307A8u;
    // 0x1307a8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1307a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1307ac: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1307ACu;
    SET_GPR_U32(ctx, 31, 0x1307B4u);
    ctx->pc = 0x1307B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307ACu;
    // 0x1307b0: 0x248460f8  addiu       $a0, $a0, 0x60F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1307ACu, 0x1307B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307B4u;
label_1307b4:
    // 0x1307b4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1307b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1307b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1307b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307bc: 0x24a56118  addiu       $a1, $a1, 0x6118
    ctx->pc = 0x1307bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24856));
    // 0x1307c0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1307C0u;
    SET_GPR_U32(ctx, 31, 0x1307C8u);
    ctx->pc = 0x1307C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307C0u;
    // 0x1307c4: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1307C0u, 0x1307C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307C8u;
}
