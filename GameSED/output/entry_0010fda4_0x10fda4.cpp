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

// Function: entry_0010fda4
// Address: 0x10fda4 - 0x10fdbc
void entry_0010fda4_0x10fda4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fda4_0x10fda4");
#endif

    ctx->pc = 0x10fda4u;

    // 0x10fda4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x10FDA4u;
    {
        const bool branch_taken_0x10fda4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDA4u;
        // 0x10fda8: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fda4) {
            ctx->pc = 0x10FE0Cu;
            return;
        }
    }
    ctx->pc = 0x10FDACu;
    // 0x10fdac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FDACu;
    {
        const bool branch_taken_0x10fdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDACu;
        // 0x10fdb0: 0xc6410154  lwc1        $f1, 0x154($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdac) {
            ctx->pc = 0x10FDBCu;
            return;
        }
    }
    ctx->pc = 0x10FDB4u;
    // 0x10fdb4: 0xc7808070  lwc1        $f0, -0x7F90($gp)
    ctx->pc = 0x10fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fdb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10fdb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x10fdbcu;
}
