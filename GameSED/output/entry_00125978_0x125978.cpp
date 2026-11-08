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

// Function: entry_00125978
// Address: 0x125978 - 0x125a00
void entry_00125978_0x125978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125978_0x125978");
#endif

    switch (ctx->pc) {
        case 0x1259c4u: goto label_1259c4;
        default: break;
    }

    ctx->pc = 0x125978u;

    // 0x125978: 0x26250007  addiu       $a1, $s1, 0x7
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x12597c: 0x2a230000  slti        $v1, $s1, 0x0
    ctx->pc = 0x12597cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x125980: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x125980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125984: 0x24043a98  addiu       $a0, $zero, 0x3A98
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
    // 0x125988: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x125988u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x12598c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x125990: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x125994: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x125994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125998: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x125998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12599c: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1259a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1259a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1259a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1259a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1259a8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1259a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1259ac: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1259acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1259b0: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1259b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1259b4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1259b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1259b8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1259b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1259bc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1259BCu;
    SET_GPR_U32(ctx, 31, 0x1259C4u);
    ctx->pc = 0x1259C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1259BCu;
    // 0x1259c0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1259BCu, 0x1259C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259C4u;
label_1259c4:
    // 0x1259c4: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x1259c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x1259c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1259c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1259cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1259ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1259d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1259d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1259d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1259d8: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1259dc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1259dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1259e0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1259e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1259e4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1259E4u;
    {
        const bool branch_taken_0x1259e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1259E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259E4u;
        // 0x1259e8: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259e4) {
            ctx->pc = 0x125A00u;
            return;
        }
    }
    ctx->pc = 0x1259ECu;
    // 0x1259ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1259ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1259f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1259f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1259f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1259F4u;
    {
        const bool branch_taken_0x1259f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259F4u;
        // 0x1259f8: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259f4) {
            ctx->pc = 0x125A10u;
            return;
        }
    }
    ctx->pc = 0x1259FCu;
    // 0x1259fc: 0x0  nop
    ctx->pc = 0x1259fcu;
    // NOP
    ctx->pc = 0x125a00u;
}
