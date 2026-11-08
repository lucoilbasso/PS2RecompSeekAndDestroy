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

// Function: __kernel_sin
// Address: 0x1c7b00 - 0x1c7d38
void ps2___kernel_sin_0x1c7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_sin_0x1c7b00");
#endif

    switch (ctx->pc) {
        case 0x1c7b58u: goto label_1c7b58;
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
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7cbcu: goto label_1c7cbc;
        case 0x1c7cccu: goto label_1c7ccc;
        case 0x1c7cdcu: goto label_1c7cdc;
        case 0x1c7cf4u: goto label_1c7cf4;
        case 0x1c7d04u: goto label_1c7d04;
        case 0x1c7d14u: goto label_1c7d14;
        default: break;
    }

    ctx->pc = 0x1c7b00u;

    // 0x1c7b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c7b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c7b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7b08: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c7b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c7b10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c7b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c7b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c7b18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c7b18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7b20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7b24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c7b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c7b28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c7b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b2c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1c7b2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c7b30: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1c7b34: 0x3c023e3f  lui         $v0, 0x3E3F
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15935 << 16));
    // 0x1c7b38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c7b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c7b3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c7b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c7b40: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1c7b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c7b44: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1c7b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c7b48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7B48u;
    {
        const bool branch_taken_0x1c7b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B48u;
        // 0x1c7b4c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b48) {
            ctx->pc = 0x1C7B70u;
            goto label_1c7b70;
        }
    }
    ctx->pc = 0x1C7B50u;
    // 0x1c7b50: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7B50u;
    SET_GPR_U32(ctx, 31, 0x1C7B58u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7B50u, 0x1C7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B58u;
label_1c7b58:
    // 0x1c7b58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7B58u;
    {
        const bool branch_taken_0x1c7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b58) {
            ctx->pc = 0x1C7B70u;
            goto label_1c7b70;
        }
    }
    ctx->pc = 0x1C7B60u;
    // 0x1c7b60: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1c7b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b64: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1C7B64u;
    {
        const bool branch_taken_0x1c7b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B64u;
        // 0x1c7b68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b64) {
            ctx->pc = 0x1C7D18u;
            goto label_1c7d18;
        }
    }
    ctx->pc = 0x1C7B6Cu;
    // 0x1c7b6c: 0x0  nop
    ctx->pc = 0x1c7b6cu;
    // NOP
label_1c7b70:
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
            goto label_1c7c90;
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
            goto label_1c7d18;
        }
    }
    ctx->pc = 0x1C7C90u;
label_1c7c90:
    // 0x1c7c90: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7C90u;
    SET_GPR_U32(ctx, 31, 0x1C7C98u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7C90u, 0x1C7C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C98u;
label_1c7c98:
    // 0x1c7c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c7c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ca4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7CA4u;
    SET_GPR_U32(ctx, 31, 0x1C7CACu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7CA4u, 0x1C7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CACu;
label_1c7cac:
    // 0x1c7cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cb4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7CB4u;
    SET_GPR_U32(ctx, 31, 0x1C7CBCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7CB4u, 0x1C7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CBCu;
label_1c7cbc:
    // 0x1c7cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cc4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7CC4u;
    SET_GPR_U32(ctx, 31, 0x1C7CCCu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7CC4u, 0x1C7CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CCCu;
label_1c7ccc:
    // 0x1c7ccc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c7cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cd4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7CD4u;
    SET_GPR_U32(ctx, 31, 0x1C7CDCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7CD4u, 0x1C7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CDCu;
label_1c7cdc:
    // 0x1c7cdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ce0: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7ce4: 0xdc25bb98  ld          $a1, -0x4468($at)
    ctx->pc = 0x1c7ce4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB98u));
    // 0x1c7ce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cec: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7CECu;
    SET_GPR_U32(ctx, 31, 0x1C7CF4u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7CECu, 0x1C7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CF4u;
label_1c7cf4:
    // 0x1c7cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cfc: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7CFCu;
    SET_GPR_U32(ctx, 31, 0x1C7D04u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7CFCu, 0x1C7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D04u;
label_1c7d04:
    // 0x1c7d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d0c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D14u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7D0Cu, 0x1C7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D14u;
label_1c7d14:
    // 0x1c7d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7d18:
    // 0x1c7d18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7d1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c7d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7d20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7d24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c7d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7d28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c7d28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c7d2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c7d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D30u;
        // 0x1c7d34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7D38u;
}
