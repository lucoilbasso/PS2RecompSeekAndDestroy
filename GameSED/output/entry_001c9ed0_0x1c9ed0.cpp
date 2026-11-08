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

// Function: entry_001c9ed0
// Address: 0x1c9ed0 - 0x1c9ef0
void entry_001c9ed0_0x1c9ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9ed0_0x1c9ed0");
#endif

    ctx->pc = 0x1c9ed0u;

    // 0x1c9ed0: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1c9ed0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c9ed4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9ed8: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1c9ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1c9edc: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1c9edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1c9ee0: 0x64e3ffff  daddiu      $v1, $a3, -0x1
    ctx->pc = 0x1c9ee0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x1c9ee4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c9ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c9ee8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9EE8u;
    {
        const bool branch_taken_0x1c9ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ee8) {
            ctx->pc = 0x1C9F3Cu;
            return;
        }
    }
    ctx->pc = 0x1C9EF0u;
}
