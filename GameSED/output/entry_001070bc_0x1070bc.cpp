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

// Function: entry_001070bc
// Address: 0x1070bc - 0x107158
void entry_001070bc_0x1070bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001070bc_0x1070bc");
#endif

    switch (ctx->pc) {
        case 0x1070c4u: goto label_1070c4;
        case 0x1070ecu: goto label_1070ec;
        case 0x107100u: goto label_107100;
        case 0x107110u: goto label_107110;
        case 0x10711cu: goto label_10711c;
        case 0x10712cu: goto label_10712c;
        case 0x107148u: goto label_107148;
        default: break;
    }

    ctx->pc = 0x1070bcu;

label_1070bc:
    // 0x1070bc: 0xc061422  jal         func_185088
label_1070c0:
    if (ctx->pc == 0x1070C0u) {
        ctx->pc = 0x1070C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070BCu;
        // 0x1070c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070C4u;
        goto label_1070c4;
    }
    ctx->pc = 0x1070BCu;
    SET_GPR_U32(ctx, 31, 0x1070C4u);
    ctx->pc = 0x1070C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070BCu;
    // 0x1070c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1070BCu, 0x1070C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070C4u;
label_1070c4:
    // 0x1070c4: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_1070c8:
    // 0x1070c8: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x1070c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1070cc:
    // 0x1070cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1070ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1070d0:
    // 0x1070d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1070d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1070d4:
    // 0x1070d4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1070d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1070d8:
    // 0x1070d8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1070d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_1070dc:
    // 0x1070dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1070dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1070e0:
    // 0x1070e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1070e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1070e4:
    // 0x1070e4: 0xc0614f6  jal         func_1853D8
label_1070e8:
    if (ctx->pc == 0x1070E8u) {
        ctx->pc = 0x1070E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070E4u;
        // 0x1070e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070ECu;
        goto label_1070ec;
    }
    ctx->pc = 0x1070E4u;
    SET_GPR_U32(ctx, 31, 0x1070ECu);
    ctx->pc = 0x1070E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070E4u;
    // 0x1070e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x1070E4u, 0x1070ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070ECu;
label_1070ec:
    // 0x1070ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1070ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1070f0:
    // 0x1070f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1070f4:
    // 0x1070f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1070f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1070f8:
    // 0x1070f8: 0xc061468  jal         func_1851A0
label_1070fc:
    if (ctx->pc == 0x1070FCu) {
        ctx->pc = 0x1070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070F8u;
        // 0x1070fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107100u;
        goto label_107100;
    }
    ctx->pc = 0x1070F8u;
    SET_GPR_U32(ctx, 31, 0x107100u);
    ctx->pc = 0x1070FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070F8u;
    // 0x1070fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x1070F8u, 0x107100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107100u;
label_107100:
    // 0x107100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x107100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107104:
    // 0x107104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107108:
    // 0x107108: 0xc0674a2  jal         func_19D288
label_10710c:
    if (ctx->pc == 0x10710Cu) {
        ctx->pc = 0x10710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107108u;
        // 0x10710c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107110u;
        goto label_107110;
    }
    ctx->pc = 0x107108u;
    SET_GPR_U32(ctx, 31, 0x107110u);
    ctx->pc = 0x10710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107108u;
    // 0x10710c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x107108u, 0x107110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107110u;
label_107110:
    // 0x107110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_107114:
    // 0x107114: 0xc041160  jal         func_104580
label_107118:
    if (ctx->pc == 0x107118u) {
        ctx->pc = 0x107118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107114u;
        // 0x107118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10711Cu;
        goto label_10711c;
    }
    ctx->pc = 0x107114u;
    SET_GPR_U32(ctx, 31, 0x10711Cu);
    ctx->pc = 0x107118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107114u;
    // 0x107118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x107114u, 0x10711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10711Cu;
label_10711c:
    // 0x10711c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_107120:
    // 0x107120: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x107120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_107124:
    // 0x107124: 0xc04112e  jal         func_1044B8
label_107128:
    if (ctx->pc == 0x107128u) {
        ctx->pc = 0x107128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107124u;
        // 0x107128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10712Cu;
        goto label_10712c;
    }
    ctx->pc = 0x107124u;
    SET_GPR_U32(ctx, 31, 0x10712Cu);
    ctx->pc = 0x107128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107124u;
    // 0x107128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x107124u, 0x10712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10712Cu;
label_10712c:
    // 0x10712c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_107130:
    // 0x107130: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_107134:
    // 0x107134: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x107134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_107138:
    // 0x107138: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10713c:
    // 0x10713c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107140:
    // 0x107140: 0x60f809  jalr        $v1
label_107144:
    if (ctx->pc == 0x107144u) {
        ctx->pc = 0x107144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107140u;
        // 0x107144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107148u;
        goto label_107148;
    }
    ctx->pc = 0x107140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107148u);
        ctx->pc = 0x107144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107140u;
        // 0x107144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107140u, 0x107148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107148u;
label_107148:
    // 0x107148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10714c:
    // 0x10714c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10714cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107150:
    // 0x107150: 0xc0618da  jal         func_186368
label_107154:
    if (ctx->pc == 0x107154u) {
        ctx->pc = 0x107154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107150u;
        // 0x107154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107158u;
        goto label_fallthrough_0x107150;
    }
    ctx->pc = 0x107150u;
    SET_GPR_U32(ctx, 31, 0x107158u);
    ctx->pc = 0x107154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107150u;
    // 0x107154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x107150u, 0x107158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x107150:
    ctx->pc = 0x107158u;
}
