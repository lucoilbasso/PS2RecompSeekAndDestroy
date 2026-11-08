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

// Function: entry_00161db0
// Address: 0x161db0 - 0x161de0
void entry_00161db0_0x161db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161db0_0x161db0");
#endif

    ctx->pc = 0x161db0u;

    // 0x161db0: 0x25430010  addiu       $v1, $t2, 0x10
    ctx->pc = 0x161db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x161db4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x161db8: 0x46004146  mov.s       $f5, $f8
    ctx->pc = 0x161db8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[8]);
    // 0x161dbc: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x161DBCu;
    {
        const bool branch_taken_0x161dbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x161DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DBCu;
        // 0x161dc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dbc) {
            ctx->pc = 0x161E80u;
            return;
        }
    }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0xc787832c  lwc1        $f7, -0x7CD4($gp)
    ctx->pc = 0x161dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x161dc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x161dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161dcc: 0xc7868330  lwc1        $f6, -0x7CD0($gp)
    ctx->pc = 0x161dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x161dd0: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x161dd0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x161dd4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x161dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161dd8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x161dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ddc: 0x0  nop
    ctx->pc = 0x161ddcu;
    // NOP
    ctx->pc = 0x161de0u;
}
