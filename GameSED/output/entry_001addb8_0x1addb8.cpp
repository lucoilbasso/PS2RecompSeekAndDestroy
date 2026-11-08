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

// Function: entry_001addb8
// Address: 0x1addb8 - 0x1adde4
void entry_001addb8_0x1addb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001addb8_0x1addb8");
#endif

    ctx->pc = 0x1addb8u;

    // 0x1addb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1addb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addbc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1addbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1addc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1addc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1addc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addc8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1addc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1addcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1addccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1addd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1addd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1addd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1addd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1addd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adddc: 0x806b6c2  j           func_1ADB08
    ctx->pc = 0x1ADDDCu;
    ctx->pc = 0x1ADDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDDCu;
    // 0x1adde0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB08u;
    sceDevConsClearBox_0x1adb08(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADDE4u;
}
