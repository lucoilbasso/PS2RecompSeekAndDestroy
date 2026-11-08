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

// Function: entry_00135ca0
// Address: 0x135ca0 - 0x135ce0
void entry_00135ca0_0x135ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135ca0_0x135ca0");
#endif

    ctx->pc = 0x135ca0u;

    // 0x135ca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135ca4: 0x1073000e  beq         $v1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x135CA4u;
    {
        const bool branch_taken_0x135ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x135CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CA4u;
        // 0x135ca8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ca4) {
            ctx->pc = 0x135CE0u;
            return;
        }
    }
    ctx->pc = 0x135CACu;
    // 0x135cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135cb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135cbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135cc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135cc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135cc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135cc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135ccc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135cd0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135cd4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135cd8: 0x80506fc  j           func_141BF0
    ctx->pc = 0x135CD8u;
    ctx->pc = 0x135CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CD8u;
    // 0x135cdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141BF0u;
    ApCMZoomSetStandard__FP9ApcCameraf_0x141bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x135CE0u;
}
