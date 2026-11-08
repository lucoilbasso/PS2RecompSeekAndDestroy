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

// Function: entry_00125890
// Address: 0x125890 - 0x125908
void entry_00125890_0x125890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125890_0x125890");
#endif

    ctx->pc = 0x125890u;

label_125890:
    // 0x125890: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x125890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x125894: 0x24c22000  addiu       $v0, $a2, 0x2000
    ctx->pc = 0x125894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x125898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12589c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x12589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1258a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1258a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1258a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1258a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1258a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1258ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1258acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1258b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1258b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1258b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1258b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1258b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1258bc: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x1258bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1258c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1258c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1258c4: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x1258c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1258c8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1258cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1258ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1258d0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1258d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1258d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1258d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1258d8: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1258D8u;
    {
        const bool branch_taken_0x1258d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1258DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258D8u;
        // 0x1258dc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258d8) {
            ctx->pc = 0x125890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125890;
        }
    }
    ctx->pc = 0x1258E0u;
    // 0x1258e0: 0x3c022022  lui         $v0, 0x2022
    ctx->pc = 0x1258e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8226 << 16));
    // 0x1258e4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1258e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1258e8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1258e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1258ec: 0x2446f640  addiu       $a2, $v0, -0x9C0
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x1258f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1258f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1258f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1258f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1258f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258fc: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1258fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x125900: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125904: 0x0  nop
    ctx->pc = 0x125904u;
    // NOP
    ctx->pc = 0x125908u;
}
