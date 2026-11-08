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

// Function: entry_001c69b8
// Address: 0x1c69b8 - 0x1c6b14
void entry_001c69b8_0x1c69b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c69b8_0x1c69b8");
#endif

    switch (ctx->pc) {
        case 0x1c69c8u: goto label_1c69c8;
        case 0x1c6a00u: goto label_1c6a00;
        case 0x1c6a14u: goto label_1c6a14;
        case 0x1c6a2cu: goto label_1c6a2c;
        case 0x1c6a40u: goto label_1c6a40;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a60u: goto label_1c6a60;
        case 0x1c6a74u: goto label_1c6a74;
        case 0x1c6aacu: goto label_1c6aac;
        case 0x1c6ac0u: goto label_1c6ac0;
        case 0x1c6ad8u: goto label_1c6ad8;
        case 0x1c6aecu: goto label_1c6aec;
        case 0x1c6afcu: goto label_1c6afc;
        case 0x1c6b0cu: goto label_1c6b0c;
        default: break;
    }

    ctx->pc = 0x1c69b8u;

    // 0x1c69b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c69b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c69bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69c0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C69C0u;
    SET_GPR_U32(ctx, 31, 0x1C69C8u);
    ctx->pc = 0x1C69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69C0u;
    // 0x1c69c4: 0x10bd03  sra         $s7, $s0, 20 (Delay Slot)
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C69C0u, 0x1C69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69C8u;
label_1c69c8:
    // 0x1c69c8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c69cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c69ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69d0: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x1c69d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x1c69d4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1c69d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1c69d8: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x1c69d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1c69dc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1c69dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c69e0: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C69E0u;
    {
        const bool branch_taken_0x1c69e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c69e0) {
            ctx->pc = 0x1C6B24u;
            return;
        }
    }
    ctx->pc = 0x1C69E8u;
    // 0x1c69e8: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c69e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c69ec: 0xdc25ba38  ld          $a1, -0x45C8($at)
    ctx->pc = 0x1c69ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA38u));
    // 0x1c69f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c69f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69f4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1c69f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69f8: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C69F8u;
    SET_GPR_U32(ctx, 31, 0x1C6A00u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C69F8u, 0x1C6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A00u;
label_1c6a00:
    // 0x1c6a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a0c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A14u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A0Cu, 0x1C6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A14u;
label_1c6a14:
    // 0x1c6a14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a18: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6a1c: 0xdc25ba40  ld          $a1, -0x45C0($at)
    ctx->pc = 0x1c6a1cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA40u));
    // 0x1c6a20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c6a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a24: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6A24u;
    SET_GPR_U32(ctx, 31, 0x1C6A2Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6A24u, 0x1C6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A2Cu;
label_1c6a2c:
    // 0x1c6a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c6a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a38: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A38u;
    SET_GPR_U32(ctx, 31, 0x1C6A40u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A38u, 0x1C6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A40u;
label_1c6a40:
    // 0x1c6a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a48: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A48u, 0x1C6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a58: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A58u;
    SET_GPR_U32(ctx, 31, 0x1C6A60u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A58u, 0x1C6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A60u;
label_1c6a60:
    // 0x1c6a60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a6c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A74u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A6Cu, 0x1C6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A74u;
label_1c6a74:
    // 0x1c6a74: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c6a78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6a78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a7c: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x1c6a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x1c6a80: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1c6a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1c6a84: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x1c6a84u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1c6a88: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x1c6a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c6a8c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C6A8Cu;
    {
        const bool branch_taken_0x1c6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a8c) {
            ctx->pc = 0x1C6B24u;
            return;
        }
    }
    ctx->pc = 0x1C6A94u;
    // 0x1c6a94: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6a98: 0xdc25ba48  ld          $a1, -0x45B8($at)
    ctx->pc = 0x1c6a98u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA48u));
    // 0x1c6a9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1c6aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6AA4u;
    SET_GPR_U32(ctx, 31, 0x1C6AACu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6AA4u, 0x1C6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AACu;
label_1c6aac:
    // 0x1c6aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab8: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6AB8u;
    SET_GPR_U32(ctx, 31, 0x1C6AC0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6AB8u, 0x1C6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AC0u;
label_1c6ac0:
    // 0x1c6ac0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac4: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6ac8: 0xdc25ba50  ld          $a1, -0x45B0($at)
    ctx->pc = 0x1c6ac8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA50u));
    // 0x1c6acc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c6accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ad0: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6AD0u;
    SET_GPR_U32(ctx, 31, 0x1C6AD8u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6AD0u, 0x1C6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AD8u;
label_1c6ad8:
    // 0x1c6ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6adc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c6adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6AE4u;
    SET_GPR_U32(ctx, 31, 0x1C6AECu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6AE4u, 0x1C6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AECu;
label_1c6aec:
    // 0x1c6aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6af4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6AF4u;
    SET_GPR_U32(ctx, 31, 0x1C6AFCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6AF4u, 0x1C6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AFCu;
label_1c6afc:
    // 0x1c6afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b04: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B04u;
    SET_GPR_U32(ctx, 31, 0x1C6B0Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B04u, 0x1C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0Cu;
label_1c6b0c:
    // 0x1c6b0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c6b14u;
}
