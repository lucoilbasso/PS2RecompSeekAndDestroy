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

// Function: entry_0017a8bc
// Address: 0x17a8bc - 0x17a8cc
void entry_0017a8bc_0x17a8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a8bc_0x17a8bc");
#endif

    ctx->pc = 0x17a8bcu;

    // 0x17a8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17a8c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17a8c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x17a8ccu;
}
