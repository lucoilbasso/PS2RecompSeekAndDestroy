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

// Function: entry_00149058
// Address: 0x149058 - 0x149060
void entry_00149058_0x149058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149058_0x149058");
#endif

    ctx->pc = 0x149058u;

    // 0x149058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x149058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14905c: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x14905cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x149060u;
}
