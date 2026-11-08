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

// Function: entry_001263c0
// Address: 0x1263c0 - 0x126428
void entry_001263c0_0x1263c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001263c0_0x1263c0");
#endif

    switch (ctx->pc) {
        case 0x1263f8u: goto label_1263f8;
        default: break;
    }

    ctx->pc = 0x1263c0u;

    // 0x1263c0: 0x24041b58  addiu       $a0, $zero, 0x1B58
    ctx->pc = 0x1263c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
    // 0x1263c4: 0x1812  mflo        $v1
    ctx->pc = 0x1263c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1263c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1263c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1263cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1263ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1263d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1263d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1263d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1263d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1263d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1263d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1263dc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1263dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1263e0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1263e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1263e4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1263e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1263e8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1263e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1263ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1263ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1263f0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1263F0u;
    SET_GPR_U32(ctx, 31, 0x1263F8u);
    ctx->pc = 0x1263F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1263F0u;
    // 0x1263f4: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1263F0u, 0x1263F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263F8u;
label_1263f8:
    // 0x1263f8: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x1263f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x1263fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1263fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x126400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12640c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x12640cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x126410: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126410u;
    {
        const bool branch_taken_0x126410 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x126414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126410u;
        // 0x126414: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126410) {
            ctx->pc = 0x126428u;
            return;
        }
    }
    ctx->pc = 0x126418u;
    // 0x126418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12641c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12641cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126420: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126420u;
    {
        const bool branch_taken_0x126420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126420u;
        // 0x126424: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126420) {
            ctx->pc = 0x12643Cu;
            return;
        }
    }
    ctx->pc = 0x126428u;
}
