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

// Function: entry_00108524
// Address: 0x108524 - 0x108578
void entry_00108524_0x108524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108524_0x108524");
#endif

    switch (ctx->pc) {
        case 0x108530u: goto label_108530;
        default: break;
    }

    ctx->pc = 0x108524u;

    // 0x108524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108528: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x108528u;
    SET_GPR_U32(ctx, 31, 0x108530u);
    ctx->pc = 0x10852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108528u;
    // 0x10852c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x108528u, 0x108530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108530u;
label_108530:
    // 0x108530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108534: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x108534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x108538: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10853c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x10853cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108540: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108544: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x108548: 0x3401fff9  ori         $at, $zero, 0xFFF9
    ctx->pc = 0x108548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x10854c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x10854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x108550: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x108550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x108554: 0x2c840011  sltiu       $a0, $a0, 0x11
    ctx->pc = 0x108554u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x108558: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x108558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10855c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x10855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x108560: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x108560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x108564: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x108564u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x108568: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108568u;
    {
        const bool branch_taken_0x108568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108568u;
        // 0x10856c: 0x2c630004  sltiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108568) {
            ctx->pc = 0x108578u;
            return;
        }
    }
    ctx->pc = 0x108570u;
    // 0x108570: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x108570u;
    {
        const bool branch_taken_0x108570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x108570) {
            ctx->pc = 0x108574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108570u;
            // 0x108574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1085ACu;
            return;
        }
    }
    ctx->pc = 0x108578u;
}
