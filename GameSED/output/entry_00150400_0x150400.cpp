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

// Function: entry_00150400
// Address: 0x150400 - 0x150490
void entry_00150400_0x150400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150400_0x150400");
#endif

    switch (ctx->pc) {
        case 0x150428u: goto label_150428;
        default: break;
    }

    ctx->pc = 0x150400u;

    // 0x150400: 0x26300440  addiu       $s0, $s1, 0x440
    ctx->pc = 0x150400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x150404: 0x26d405b0  addiu       $s4, $s6, 0x5B0
    ctx->pc = 0x150404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1456));
    // 0x150408: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x150408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x15040c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15040cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150410: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150414: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x150414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150418: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15041c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150420: 0xc05129a  jal         func_144A68
    ctx->pc = 0x150420u;
    SET_GPR_U32(ctx, 31, 0x150428u);
    ctx->pc = 0x150424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150420u;
    // 0x150424: 0x26330420  addiu       $s3, $s1, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x150420u, 0x150428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150428u;
label_150428:
    // 0x150428: 0x8ea50328  lw          $a1, 0x328($s5)
    ctx->pc = 0x150428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15042c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x15042cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x150430: 0xe6210430  swc1        $f1, 0x430($s1)
    ctx->pc = 0x150430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
    // 0x150434: 0x24a54020  addiu       $a1, $a1, 0x4020
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16416));
    // 0x150438: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x150438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15043c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x15043cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x150440: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x150440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x150444: 0xfe230448  sd          $v1, 0x448($s1)
    ctx->pc = 0x150444u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1096), GPR_U64(ctx, 3));
    // 0x150448: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x150448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15044c: 0xfe220450  sd          $v0, 0x450($s1)
    ctx->pc = 0x15044cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1104), GPR_U64(ctx, 2));
    // 0x150450: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x150450u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x150454: 0xfe230458  sd          $v1, 0x458($s1)
    ctx->pc = 0x150454u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1112), GPR_U64(ctx, 3));
    // 0x150458: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x150458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15045c: 0xfe220460  sd          $v0, 0x460($s1)
    ctx->pc = 0x15045cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1120), GPR_U64(ctx, 2));
    // 0x150460: 0xdca40028  ld          $a0, 0x28($a1)
    ctx->pc = 0x150460u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x150464: 0xfe240468  sd          $a0, 0x468($s1)
    ctx->pc = 0x150464u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1128), GPR_U64(ctx, 4));
    // 0x150468: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x150468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15046c: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x15046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x150470: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x150470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150474: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x150474u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x150478: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x150478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15047c: 0x9062402c  lbu         $v0, 0x402C($v1)
    ctx->pc = 0x15047cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16428)));
    // 0x150480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150480u;
    {
        const bool branch_taken_0x150480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150480u;
        // 0x150484: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150480) {
            ctx->pc = 0x150490u;
            return;
        }
    }
    ctx->pc = 0x150488u;
    // 0x150488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150488u;
    {
        const bool branch_taken_0x150488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150488u;
        // 0x15048c: 0x8c624018  lw          $v0, 0x4018($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150488) {
            ctx->pc = 0x150494u;
            return;
        }
    }
    ctx->pc = 0x150490u;
}
