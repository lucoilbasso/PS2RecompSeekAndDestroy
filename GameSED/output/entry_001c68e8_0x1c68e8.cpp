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

// Function: entry_001c68e8
// Address: 0x1c68e8 - 0x1c69b8
void entry_001c68e8_0x1c68e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c68e8_0x1c68e8");
#endif

    switch (ctx->pc) {
        case 0x1c6900u: goto label_1c6900;
        case 0x1c6918u: goto label_1c6918;
        case 0x1c692cu: goto label_1c692c;
        case 0x1c6938u: goto label_1c6938;
        case 0x1c6944u: goto label_1c6944;
        case 0x1c695cu: goto label_1c695c;
        case 0x1c696cu: goto label_1c696c;
        case 0x1c6984u: goto label_1c6984;
        default: break;
    }

    ctx->pc = 0x1c68e8u;

    // 0x1c68e8: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c68e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1c68ec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c68ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c68f0: 0x544000a3  bnel        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1C68F0u;
    {
        const bool branch_taken_0x1c68f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c68f0) {
            ctx->pc = 0x1C68F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C68F0u;
            // 0x1c68f4: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B80u;
            return;
        }
    }
    ctx->pc = 0x1C68F8u;
    // 0x1c68f8: 0xc071f4e  jal         func_1C7D38
    ctx->pc = 0x1C68F8u;
    SET_GPR_U32(ctx, 31, 0x1C6900u);
    ctx->pc = 0x1C7D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D38u, 0x1C68F8u, 0x1C6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6900u;
label_1c6900:
    // 0x1c6900: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6904: 0xdc25ba20  ld          $a1, -0x45E0($at)
    ctx->pc = 0x1c6904u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA20u));
    // 0x1c6908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c690c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6910: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6910u;
    SET_GPR_U32(ctx, 31, 0x1C6918u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6910u, 0x1C6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6918u;
label_1c6918:
    // 0x1c6918: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c6918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c691c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c691cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c6920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6924: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6924u;
    SET_GPR_U32(ctx, 31, 0x1C692Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6924u, 0x1C692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C692Cu;
label_1c692c:
    // 0x1c692c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6930: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C6930u;
    SET_GPR_U32(ctx, 31, 0x1C6938u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C6930u, 0x1C6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6938u;
label_1c6938:
    // 0x1c6938: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c6938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c693c: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C693Cu;
    SET_GPR_U32(ctx, 31, 0x1C6944u);
    ctx->pc = 0x1C6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C693Cu;
    // 0x1c6940: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C693Cu, 0x1C6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6944u;
label_1c6944:
    // 0x1c6944: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6948: 0xdc25ba28  ld          $a1, -0x45D8($at)
    ctx->pc = 0x1c6948u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA28u));
    // 0x1c694c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c694cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6954: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6954u;
    SET_GPR_U32(ctx, 31, 0x1C695Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6954u, 0x1C695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C695Cu;
label_1c695c:
    // 0x1c695c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6964: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6964u;
    SET_GPR_U32(ctx, 31, 0x1C696Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6964u, 0x1C696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C696Cu;
label_1c696c:
    // 0x1c696c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6970: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6974: 0xdc25ba30  ld          $a1, -0x45D0($at)
    ctx->pc = 0x1c6974u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA30u));
    // 0x1c6978: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c6978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c697c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C697Cu;
    SET_GPR_U32(ctx, 31, 0x1C6984u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C697Cu, 0x1C6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6984u;
label_1c6984:
    // 0x1c6984: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6988: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x1c6988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c698c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C698Cu;
    {
        const bool branch_taken_0x1c698c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C698Cu;
        // 0x1c6990: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c698c) {
            ctx->pc = 0x1C69B8u;
            return;
        }
    }
    ctx->pc = 0x1C6994u;
    // 0x1c6994: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1c6998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c6998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c699c: 0x8c63b90c  lw          $v1, -0x46F4($v1)
    ctx->pc = 0x1c699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949132)));
    // 0x1c69a0: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C69A0u;
    {
        const bool branch_taken_0x1c69a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c69a0) {
            ctx->pc = 0x1C69B8u;
            return;
        }
    }
    ctx->pc = 0x1C69A8u;
    // 0x1c69a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c69a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69ac: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C69ACu;
    {
        const bool branch_taken_0x1c69ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c69ac) {
            ctx->pc = 0x1C6B14u;
            return;
        }
    }
    ctx->pc = 0x1C69B4u;
    // 0x1c69b4: 0x0  nop
    ctx->pc = 0x1c69b4u;
    // NOP
    ctx->pc = 0x1c69b8u;
}
