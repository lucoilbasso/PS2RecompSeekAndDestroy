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

// Function: entry_001517a0
// Address: 0x1517a0 - 0x151868
void entry_001517a0_0x1517a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001517a0_0x1517a0");
#endif

    ctx->pc = 0x1517a0u;

    // 0x1517a0: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x1517a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1517a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1517a8: 0xc7818274  lwc1        $f1, -0x7D8C($gp)
    ctx->pc = 0x1517a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1517ac: 0x24a5f640  addiu       $a1, $a1, -0x9C0
    ctx->pc = 0x1517acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    // 0x1517b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1517b4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1517b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1517b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1517bc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1517bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1517c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1517c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1517c4: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x1517c8: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x1517c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1517cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1517d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1517d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1517d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1517dc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1517dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1517e0: 0xc6050624  lwc1        $f5, 0x624($s0)
    ctx->pc = 0x1517e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1517e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1517e8: 0xc7828278  lwc1        $f2, -0x7D88($gp)
    ctx->pc = 0x1517e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1517ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1517ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1517f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1517f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1517f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1517f8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1517f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1517fc: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1517fcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x151800: 0xc781827c  lwc1        $f1, -0x7D84($gp)
    ctx->pc = 0x151800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151804: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x151804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x151808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15180c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x151810: 0xc6030628  lwc1        $f3, 0x628($s0)
    ctx->pc = 0x151810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151814: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x151814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151818: 0xc7848280  lwc1        $f4, -0x7D80($gp)
    ctx->pc = 0x151818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15181c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x15181cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x151820: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x151820u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x151824: 0xc6000620  lwc1        $f0, 0x620($s0)
    ctx->pc = 0x151824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151828: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x151828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15182c: 0xc6040414  lwc1        $f4, 0x414($s0)
    ctx->pc = 0x15182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x151830: 0xc7868284  lwc1        $f6, -0x7D7C($gp)
    ctx->pc = 0x151830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x151834: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x151834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x151838: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x151838u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x15183c: 0xe6050624  swc1        $f5, 0x624($s0)
    ctx->pc = 0x15183cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
    // 0x151840: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x151840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x151844: 0xae000438  sw          $zero, 0x438($s0)
    ctx->pc = 0x151844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1080), GPR_U32(ctx, 0));
    // 0x151848: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x151848u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x15184c: 0xae000488  sw          $zero, 0x488($s0)
    ctx->pc = 0x15184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 0));
    // 0x151850: 0xae0004d8  sw          $zero, 0x4D8($s0)
    ctx->pc = 0x151850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1240), GPR_U32(ctx, 0));
    // 0x151854: 0xe6030628  swc1        $f3, 0x628($s0)
    ctx->pc = 0x151854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1576), bits); }
    // 0x151858: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x151858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x15185c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15185Cu;
    {
        const bool branch_taken_0x15185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15185Cu;
        // 0x151860: 0xe6040414  swc1        $f4, 0x414($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15185c) {
            ctx->pc = 0x15186Cu;
            return;
        }
    }
    ctx->pc = 0x151864u;
    // 0x151864: 0x0  nop
    ctx->pc = 0x151864u;
    // NOP
    ctx->pc = 0x151868u;
}
