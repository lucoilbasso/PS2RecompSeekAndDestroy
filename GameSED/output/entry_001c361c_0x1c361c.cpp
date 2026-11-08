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

// Function: entry_001c361c
// Address: 0x1c361c - 0x1c3650
void entry_001c361c_0x1c361c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c361c_0x1c361c");
#endif

    ctx->pc = 0x1c361cu;

    // 0x1c361c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3620: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c3620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3624: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c3624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c3628: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1c3628u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c362c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1c362cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1c3630: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1c3630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3634: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c3634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3638: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c3638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c363c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c363cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3640: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c3640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3648: 0x8070c7e  j           func_1C31F8
    ctx->pc = 0x1C3648u;
    ctx->pc = 0x1C364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3648u;
    // 0x1c364c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C31F8u;
    _markOutput_0x1c31f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C3650u;
}
