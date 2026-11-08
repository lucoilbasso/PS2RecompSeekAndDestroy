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

// Function: entry_00160000
// Address: 0x160000 - 0x160050
void entry_00160000_0x160000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160000_0x160000");
#endif

    ctx->pc = 0x160000u;

    // 0x160000: 0xc6620fc4  lwc1        $f2, 0xFC4($s3)
    ctx->pc = 0x160000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160004: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x160004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160008: 0xc6e10018  lwc1        $f1, 0x18($s7)
    ctx->pc = 0x160008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16000c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16000cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x160010: 0x8e620f20  lw          $v0, 0xF20($s3)
    ctx->pc = 0x160010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
    // 0x160014: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x160014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x160018: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x16001c: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x16001cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x160020: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x160024: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x160024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x160028: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x160028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16002c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16002Cu;
    {
        const bool branch_taken_0x16002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x160030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16002Cu;
        // 0x160030: 0x2521018  mult        $v0, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16002c) {
            ctx->pc = 0x160050u;
            return;
        }
    }
    ctx->pc = 0x160034u;
    // 0x160034: 0x72101818  mult1       $v1, $s0, $s0
    ctx->pc = 0x160034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x160038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16003c: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x16003cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x160040: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x160040u;
    {
        const bool branch_taken_0x160040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160040) {
            ctx->pc = 0x160044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160040u;
            // 0x160044: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16007Cu;
            return;
        }
    }
    ctx->pc = 0x160048u;
    // 0x160048: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x160048u;
    {
        const bool branch_taken_0x160048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160048u;
        // 0x16004c: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160048) {
            ctx->pc = 0x160260u;
            return;
        }
    }
    ctx->pc = 0x160050u;
}
