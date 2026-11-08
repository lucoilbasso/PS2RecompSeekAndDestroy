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

// Function: entry_001a9db8
// Address: 0x1a9db8 - 0x1a9df0
void entry_001a9db8_0x1a9db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9db8_0x1a9db8");
#endif

    ctx->pc = 0x1a9db8u;

    // 0x1a9db8: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a9dbc: 0x14ea000c  bne         $a3, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9DBCu;
    {
        const bool branch_taken_0x1a9dbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DBCu;
        // 0x1a9dc0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dbc) {
            ctx->pc = 0x1A9DF0u;
            return;
        }
    }
    ctx->pc = 0x1A9DC4u;
    // 0x1a9dc4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a9dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9dc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9dcc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1a9dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9dd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a9dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a9dd4: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x1a9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9dd8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a9dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a9ddc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a9ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a9de0: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1a9de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a9de4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A9DE4u;
    {
        const bool branch_taken_0x1a9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DE4u;
        // 0x1a9de8: 0xe4c20008  swc1        $f2, 0x8($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9de4) {
            ctx->pc = 0x1A9E38u;
            return;
        }
    }
    ctx->pc = 0x1A9DECu;
    // 0x1a9dec: 0x0  nop
    ctx->pc = 0x1a9decu;
    // NOP
    ctx->pc = 0x1a9df0u;
}
