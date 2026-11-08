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

// Function: entry_001c7b70
// Address: 0x1c7b70 - 0x1c7c90
void entry_001c7b70_0x1c7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7b70_0x1c7b70");
#endif

    switch (ctx->pc) {
        case 0x1c7b80u: goto label_1c7b80;
        case 0x1c7b94u: goto label_1c7b94;
        case 0x1c7bacu: goto label_1c7bac;
        case 0x1c7bc0u: goto label_1c7bc0;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7be4u: goto label_1c7be4;
        case 0x1c7bf4u: goto label_1c7bf4;
        case 0x1c7c08u: goto label_1c7c08;
        case 0x1c7c18u: goto label_1c7c18;
        case 0x1c7c2cu: goto label_1c7c2c;
        case 0x1c7c54u: goto label_1c7c54;
        case 0x1c7c68u: goto label_1c7c68;
        case 0x1c7c78u: goto label_1c7c78;
        case 0x1c7c88u: goto label_1c7c88;
        default: break;
    }

    ctx->pc = 0x1c7b70u;

    // 0x1c7b70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c7b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b78: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7B78u;
    SET_GPR_U32(ctx, 31, 0x1C7B80u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7B78u, 0x1C7B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B80u;
label_1c7b80:
    // 0x1c7b80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c7b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c7b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b8c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B94u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7B8Cu, 0x1C7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B94u;
label_1c7b94:
    // 0x1c7b94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b98: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7b9c: 0xdc25bb68  ld          $a1, -0x4498($at)
    ctx->pc = 0x1c7b9cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB68u));
    // 0x1c7ba0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ba4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7BA4u;
    SET_GPR_U32(ctx, 31, 0x1C7BACu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7BA4u, 0x1C7BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BACu;
label_1c7bac:
    // 0x1c7bac: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7bb0: 0xdc25bb70  ld          $a1, -0x4490($at)
    ctx->pc = 0x1c7bb0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB70u));
    // 0x1c7bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bb8: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7BB8u;
    SET_GPR_U32(ctx, 31, 0x1C7BC0u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7BB8u, 0x1C7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BC0u;
label_1c7bc0:
    // 0x1c7bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bc8: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7BC8u;
    SET_GPR_U32(ctx, 31, 0x1C7BD0u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7BC8u, 0x1C7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BD0u;
label_1c7bd0:
    // 0x1c7bd0: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7bd4: 0xdc25bb78  ld          $a1, -0x4488($at)
    ctx->pc = 0x1c7bd4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB78u));
    // 0x1c7bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bdc: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7BDCu;
    SET_GPR_U32(ctx, 31, 0x1C7BE4u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7BDCu, 0x1C7BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BE4u;
label_1c7be4:
    // 0x1c7be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7be8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bec: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7BECu;
    SET_GPR_U32(ctx, 31, 0x1C7BF4u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7BECu, 0x1C7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BF4u;
label_1c7bf4:
    // 0x1c7bf4: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7bf8: 0xdc25bb80  ld          $a1, -0x4480($at)
    ctx->pc = 0x1c7bf8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB80u));
    // 0x1c7bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c00: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7C00u;
    SET_GPR_U32(ctx, 31, 0x1C7C08u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7C00u, 0x1C7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C08u;
label_1c7c08:
    // 0x1c7c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c10: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7C10u;
    SET_GPR_U32(ctx, 31, 0x1C7C18u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7C10u, 0x1C7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C18u;
label_1c7c18:
    // 0x1c7c18: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7c1c: 0xdc25bb88  ld          $a1, -0x4478($at)
    ctx->pc = 0x1c7c1cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB88u));
    // 0x1c7c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c24: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7C24u;
    SET_GPR_U32(ctx, 31, 0x1C7C2Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7C24u, 0x1C7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C2Cu;
label_1c7c2c:
    // 0x1c7c2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c7c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c7c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c34: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c7c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c7c38: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c7c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c7c3c: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C7C3Cu;
    {
        const bool branch_taken_0x1c7c3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c3c) {
            ctx->pc = 0x1C7C90u;
            return;
        }
    }
    ctx->pc = 0x1C7C44u;
    // 0x1c7c44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c7c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c4c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C54u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7C4Cu, 0x1C7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C54u;
label_1c7c54:
    // 0x1c7c54: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7c58: 0xdc25bb90  ld          $a1, -0x4470($at)
    ctx->pc = 0x1c7c58u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB90u));
    // 0x1c7c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c60: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7C60u;
    SET_GPR_U32(ctx, 31, 0x1C7C68u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7C60u, 0x1C7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C68u;
label_1c7c68:
    // 0x1c7c68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c70: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7C70u;
    SET_GPR_U32(ctx, 31, 0x1C7C78u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7C70u, 0x1C7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C78u;
label_1c7c78:
    // 0x1c7c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c80: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7C80u;
    SET_GPR_U32(ctx, 31, 0x1C7C88u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7C80u, 0x1C7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C88u;
label_1c7c88:
    // 0x1c7c88: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C7C88u;
    {
        const bool branch_taken_0x1c7c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C88u;
        // 0x1c7c8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c88) {
            ctx->pc = 0x1C7D18u;
            return;
        }
    }
    ctx->pc = 0x1C7C90u;
}
