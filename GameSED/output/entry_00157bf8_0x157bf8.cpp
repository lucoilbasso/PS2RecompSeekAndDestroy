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

// Function: entry_00157bf8
// Address: 0x157bf8 - 0x157c18
void entry_00157bf8_0x157bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157bf8_0x157bf8");
#endif

    ctx->pc = 0x157bf8u;

    // 0x157bf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157BF8u;
    {
        const bool branch_taken_0x157bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF8u;
        // 0x157bfc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bf8) {
            ctx->pc = 0x157C28u;
            return;
        }
    }
    ctx->pc = 0x157C00u;
    // 0x157c00: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x157c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x157c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x157c08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157c08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x157C0Cu;
    {
        const bool branch_taken_0x157c0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C0Cu;
        // 0x157c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c0c) {
            ctx->pc = 0x157C18u;
            return;
        }
    }
    ctx->pc = 0x157C14u;
    // 0x157c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157c18u;
}
