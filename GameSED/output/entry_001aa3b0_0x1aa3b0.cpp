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

// Function: entry_001aa3b0
// Address: 0x1aa3b0 - 0x1aa3d8
void entry_001aa3b0_0x1aa3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa3b0_0x1aa3b0");
#endif

    ctx->pc = 0x1aa3b0u;

    // 0x1aa3b0: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x1aa3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1aa3b4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1aa3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1aa3b8: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1aa3b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1aa3bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aa3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa3c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1aa3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa3c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aa3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa3c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aa3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa3d0: 0x806bc18  j           func_1AF060
    ctx->pc = 0x1AA3D0u;
    ctx->pc = 0x1AA3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3D0u;
    // 0x1aa3d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF060u;
    SetGsCrt_0x1af060(rdram, ctx, runtime); return;
    ctx->pc = 0x1AA3D8u;
}
