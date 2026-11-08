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

// Function: entry_001c6d48
// Address: 0x1c6d48 - 0x1c6eb8
void entry_001c6d48_0x1c6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6d48_0x1c6d48");
#endif

    switch (ctx->pc) {
        case 0x1c6d58u: goto label_1c6d58;
        case 0x1c6d70u: goto label_1c6d70;
        case 0x1c6d84u: goto label_1c6d84;
        case 0x1c6d94u: goto label_1c6d94;
        case 0x1c6da8u: goto label_1c6da8;
        case 0x1c6db8u: goto label_1c6db8;
        case 0x1c6dccu: goto label_1c6dcc;
        case 0x1c6ddcu: goto label_1c6ddc;
        case 0x1c6df0u: goto label_1c6df0;
        case 0x1c6e00u: goto label_1c6e00;
        case 0x1c6e14u: goto label_1c6e14;
        case 0x1c6e24u: goto label_1c6e24;
        case 0x1c6e50u: goto label_1c6e50;
        case 0x1c6e64u: goto label_1c6e64;
        case 0x1c6e78u: goto label_1c6e78;
        case 0x1c6e88u: goto label_1c6e88;
        case 0x1c6e98u: goto label_1c6e98;
        case 0x1c6eacu: goto label_1c6eac;
        default: break;
    }

    ctx->pc = 0x1c6d48u;

    // 0x1c6d48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c6d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c6d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d50: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6D50u;
    SET_GPR_U32(ctx, 31, 0x1C6D58u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6D50u, 0x1C6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D58u;
label_1c6d58:
    // 0x1c6d58: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6d5c: 0xdc25ba90  ld          $a1, -0x4570($at)
    ctx->pc = 0x1c6d5cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA90u));
    // 0x1c6d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d68: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6D68u;
    SET_GPR_U32(ctx, 31, 0x1C6D70u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6D68u, 0x1C6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D70u;
label_1c6d70:
    // 0x1c6d70: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6d74: 0xdc25ba98  ld          $a1, -0x4568($at)
    ctx->pc = 0x1c6d74u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA98u));
    // 0x1c6d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d7c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D84u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6D7Cu, 0x1C6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D84u;
label_1c6d84:
    // 0x1c6d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d8c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D94u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6D8Cu, 0x1C6D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D94u;
label_1c6d94:
    // 0x1c6d94: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6d98: 0xdc25baa0  ld          $a1, -0x4560($at)
    ctx->pc = 0x1c6d98u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BAA0u));
    // 0x1c6d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6da0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6DA0u;
    SET_GPR_U32(ctx, 31, 0x1C6DA8u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6DA0u, 0x1C6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DA8u;
label_1c6da8:
    // 0x1c6da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6db0: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6DB0u;
    SET_GPR_U32(ctx, 31, 0x1C6DB8u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6DB0u, 0x1C6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DB8u;
label_1c6db8:
    // 0x1c6db8: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6dbc: 0xdc25baa8  ld          $a1, -0x4558($at)
    ctx->pc = 0x1c6dbcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BAA8u));
    // 0x1c6dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dc4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6DC4u;
    SET_GPR_U32(ctx, 31, 0x1C6DCCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6DC4u, 0x1C6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DCCu;
label_1c6dcc:
    // 0x1c6dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dd4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6DD4u;
    SET_GPR_U32(ctx, 31, 0x1C6DDCu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6DD4u, 0x1C6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DDCu;
label_1c6ddc:
    // 0x1c6ddc: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6de0: 0xdc25bab0  ld          $a1, -0x4550($at)
    ctx->pc = 0x1c6de0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BAB0u));
    // 0x1c6de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6de8: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6DE8u;
    SET_GPR_U32(ctx, 31, 0x1C6DF0u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6DE8u, 0x1C6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DF0u;
label_1c6df0:
    // 0x1c6df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6df8: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6DF8u;
    SET_GPR_U32(ctx, 31, 0x1C6E00u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6DF8u, 0x1C6E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E00u;
label_1c6e00:
    // 0x1c6e00: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6e04: 0xdc25bab8  ld          $a1, -0x4548($at)
    ctx->pc = 0x1c6e04u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BAB8u));
    // 0x1c6e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e0c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E14u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6E0Cu, 0x1C6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E14u;
label_1c6e14:
    // 0x1c6e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e1c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E24u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6E1Cu, 0x1C6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E24u;
label_1c6e24:
    // 0x1c6e24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c6e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e28: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x1c6e2c: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x1c6e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x1c6e30: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c6e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c6e34: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C6E34u;
    {
        const bool branch_taken_0x1c6e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e34) {
            ctx->pc = 0x1C6E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6E34u;
            // 0x1c6e38: 0x3c023fe9  lui         $v0, 0x3FE9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6EB8u;
            return;
        }
    }
    ctx->pc = 0x1C6E3Cu;
    // 0x1c6e3c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c6e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c6e40: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c6e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c6e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e48: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6E48u;
    SET_GPR_U32(ctx, 31, 0x1C6E50u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6E48u, 0x1C6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E50u;
label_1c6e50:
    // 0x1c6e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e5c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E64u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6E5Cu, 0x1C6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E64u;
label_1c6e64:
    // 0x1c6e64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c6e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e70: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6E70u;
    SET_GPR_U32(ctx, 31, 0x1C6E78u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6E70u, 0x1C6E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E78u;
label_1c6e78:
    // 0x1c6e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e80: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6E80u;
    SET_GPR_U32(ctx, 31, 0x1C6E88u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6E80u, 0x1C6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E88u;
label_1c6e88:
    // 0x1c6e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e90: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6E90u;
    SET_GPR_U32(ctx, 31, 0x1C6E98u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6E90u, 0x1C6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E98u;
label_1c6e98:
    // 0x1c6e98: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1c6e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c6e9c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1c6e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1c6ea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ea4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6EA4u;
    SET_GPR_U32(ctx, 31, 0x1C6EACu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6EA4u, 0x1C6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EACu;
label_1c6eac:
    // 0x1c6eac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C6EACu;
    {
        const bool branch_taken_0x1c6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EACu;
        // 0x1c6eb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eac) {
            ctx->pc = 0x1C6F88u;
            return;
        }
    }
    ctx->pc = 0x1C6EB4u;
    // 0x1c6eb4: 0x0  nop
    ctx->pc = 0x1c6eb4u;
    // NOP
    ctx->pc = 0x1c6eb8u;
}
