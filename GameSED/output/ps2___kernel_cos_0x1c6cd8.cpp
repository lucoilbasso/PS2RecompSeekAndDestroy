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

// Function: __kernel_cos
// Address: 0x1c6cd8 - 0x1c6fac
void ps2___kernel_cos_0x1c6cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_cos_0x1c6cd8");
#endif

    switch (ctx->pc) {
        case 0x1c6d30u: goto label_1c6d30;
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
        case 0x1c6f04u: goto label_1c6f04;
        case 0x1c6f14u: goto label_1c6f14;
        case 0x1c6f2cu: goto label_1c6f2c;
        case 0x1c6f40u: goto label_1c6f40;
        case 0x1c6f54u: goto label_1c6f54;
        case 0x1c6f64u: goto label_1c6f64;
        case 0x1c6f74u: goto label_1c6f74;
        case 0x1c6f84u: goto label_1c6f84;
        default: break;
    }

    ctx->pc = 0x1c6cd8u;

    // 0x1c6cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6cdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c6ce0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ce4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c6ce8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c6ce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6cf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6cf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6cf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6cfc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c6cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c6d00: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c6d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d04: 0x2903f  dsra32      $s2, $v0, 0
    ctx->pc = 0x1c6d04u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c6d08: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1c6d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1c6d0c: 0x3c023e3f  lui         $v0, 0x3E3F
    ctx->pc = 0x1c6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15935 << 16));
    // 0x1c6d10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6d14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6d18: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x1c6d18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x1c6d1c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c6d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c6d20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6D20u;
    {
        const bool branch_taken_0x1c6d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D20u;
        // 0x1c6d24: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d20) {
            ctx->pc = 0x1C6D48u;
            goto label_1c6d48;
        }
    }
    ctx->pc = 0x1C6D28u;
    // 0x1c6d28: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C6D28u;
    SET_GPR_U32(ctx, 31, 0x1C6D30u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C6D28u, 0x1C6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D30u;
label_1c6d30:
    // 0x1c6d30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6D30u;
    {
        const bool branch_taken_0x1c6d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D30u;
        // 0x1c6d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d30) {
            ctx->pc = 0x1C6D48u;
            goto label_1c6d48;
        }
    }
    ctx->pc = 0x1C6D38u;
    // 0x1c6d38: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x1c6d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c6d3c: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1c6d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1c6d40: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1C6D40u;
    {
        const bool branch_taken_0x1c6d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D40u;
        // 0x1c6d44: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d40) {
            ctx->pc = 0x1C6F8Cu;
            goto label_1c6f8c;
        }
    }
    ctx->pc = 0x1C6D48u;
label_1c6d48:
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
            goto label_1c6eb8;
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
            goto label_1c6f88;
        }
    }
    ctx->pc = 0x1C6EB4u;
    // 0x1c6eb4: 0x0  nop
    ctx->pc = 0x1c6eb4u;
    // NOP
label_1c6eb8:
    // 0x1c6eb8: 0x3411ff48  ori         $s1, $zero, 0xFF48
    ctx->pc = 0x1c6eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65352);
    // 0x1c6ebc: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x1c6ebcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x1c6ec0: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c6ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c6ec4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6EC4u;
    {
        const bool branch_taken_0x1c6ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EC4u;
        // 0x1c6ec8: 0x3c02ffe0  lui         $v0, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ec4) {
            ctx->pc = 0x1C6EF0u;
            goto label_1c6ef0;
        }
    }
    ctx->pc = 0x1C6ECCu;
    // 0x1c6ecc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6ed0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c6ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c6ed4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1c6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1c6ed8: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x1c6ed8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1c6edc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c6edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6ee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6ee4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c6ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6ee8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1c6ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1c6eec: 0x2638824  and         $s1, $s3, $v1
    ctx->pc = 0x1c6eecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_1c6ef0:
    // 0x1c6ef0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c6ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c6ef4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c6ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c6ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6efc: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6EFCu;
    SET_GPR_U32(ctx, 31, 0x1C6F04u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6EFCu, 0x1C6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F04u;
label_1c6f04:
    // 0x1c6f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f0c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F14u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F0Cu, 0x1C6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F14u;
label_1c6f14:
    // 0x1c6f14: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1c6f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c6f18: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1c6f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1c6f1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f24: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F24u;
    SET_GPR_U32(ctx, 31, 0x1C6F2Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F24u, 0x1C6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F2Cu;
label_1c6f2c:
    // 0x1c6f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f38: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6F38u;
    SET_GPR_U32(ctx, 31, 0x1C6F40u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6F38u, 0x1C6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F40u;
label_1c6f40:
    // 0x1c6f40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c6f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c6f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f4c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F54u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6F4Cu, 0x1C6F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F54u;
label_1c6f54:
    // 0x1c6f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f5c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F64u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F5Cu, 0x1C6F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F64u;
label_1c6f64:
    // 0x1c6f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f6c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F74u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F6Cu, 0x1C6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F74u;
label_1c6f74:
    // 0x1c6f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f7c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F84u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F7Cu, 0x1C6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F84u;
label_1c6f84:
    // 0x1c6f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6f88:
    // 0x1c6f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c6f8c:
    // 0x1c6f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6f94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c6f94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6f98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c6f98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6f9c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c6f9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6fa0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c6fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FA4u;
        // 0x1c6fa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6FACu;
}
