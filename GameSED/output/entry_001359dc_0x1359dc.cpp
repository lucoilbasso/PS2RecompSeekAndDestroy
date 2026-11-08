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

// Function: entry_001359dc
// Address: 0x1359dc - 0x135a20
void entry_001359dc_0x1359dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001359dc_0x1359dc");
#endif

    ctx->pc = 0x1359dcu;

    // 0x1359dc: 0x5a00011c  blezl       $s0, . + 4 + (0x11C << 2)
    ctx->pc = 0x1359DCu;
    {
        const bool branch_taken_0x1359dc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1359dc) {
            ctx->pc = 0x1359E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1359DCu;
            // 0x1359e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135E50u;
            return;
        }
    }
    ctx->pc = 0x1359E4u;
    // 0x1359e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1359e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1359e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1359ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1359ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1359f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1359f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1359f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1359f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1359fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1359fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135a00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135a04: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135a04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135a08: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135a0c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135a10: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135a14: 0x8050838  j           func_1420E0
    ctx->pc = 0x135A14u;
    ctx->pc = 0x135A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A14u;
    // 0x135a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1420E0u;
    ApCameraChangeRotSpeed__FP7WcActori_0x1420e0(rdram, ctx, runtime); return;
    ctx->pc = 0x135A1Cu;
    // 0x135a1c: 0x0  nop
    ctx->pc = 0x135a1cu;
    // NOP
    ctx->pc = 0x135a20u;
}
