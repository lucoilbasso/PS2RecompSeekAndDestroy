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

// Function: entry_00125130
// Address: 0x125130 - 0x125198
void entry_00125130_0x125130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125130_0x125130");
#endif

    ctx->pc = 0x125130u;

    // 0x125130: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x125130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125138: 0xc78280cc  lwc1        $f2, -0x7F34($gp)
    ctx->pc = 0x125138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12513c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125144: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x125148: 0xc79580d0  lwc1        $f21, -0x7F30($gp)
    ctx->pc = 0x125148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12514c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12514cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125150: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x125150u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x125154: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x125154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x125158: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x125158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12515c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x12515Cu;
    {
        const bool branch_taken_0x12515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12515Cu;
        // 0x125160: 0xe7a20064  swc1        $f2, 0x64($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12515c) {
            ctx->pc = 0x125290u;
            return;
        }
    }
    ctx->pc = 0x125164u;
    // 0x125164: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x125168: 0x2476d650  addiu       $s6, $v1, -0x29B0
    ctx->pc = 0x125168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x12516c: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x125170: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x125170u;
    {
        const bool branch_taken_0x125170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125170u;
        // 0x125174: 0x8fb10124  lw          $s1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125170) {
            ctx->pc = 0x125198u;
            return;
        }
    }
    ctx->pc = 0x125178u;
    // 0x125178: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x125178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x12517c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125180: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x125184: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x125184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x125188: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x12518c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12518Cu;
    {
        const bool branch_taken_0x12518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12518Cu;
        // 0x125190: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12518c) {
            ctx->pc = 0x1251CCu;
            return;
        }
    }
    ctx->pc = 0x125194u;
    // 0x125194: 0x0  nop
    ctx->pc = 0x125194u;
    // NOP
    ctx->pc = 0x125198u;
}
