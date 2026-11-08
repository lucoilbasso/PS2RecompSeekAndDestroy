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

// Function: entry_00170b94
// Address: 0x170b94 - 0x170bac
void entry_00170b94_0x170b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170b94_0x170b94");
#endif

    ctx->pc = 0x170b94u;

    // 0x170b94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x170b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x170b98: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x170b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x170b9c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x170b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ba0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x170ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x170ba4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x170ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ba8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x170ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x170bacu;
}
