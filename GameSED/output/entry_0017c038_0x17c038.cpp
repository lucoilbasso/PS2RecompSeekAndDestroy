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

// Function: entry_0017c038
// Address: 0x17c038 - 0x17c048
void entry_0017c038_0x17c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c038_0x17c038");
#endif

    ctx->pc = 0x17c038u;

    // 0x17c038: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17c038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17c03c: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17c03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17c040: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x17c040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c044: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17C044u;
    {
        const bool branch_taken_0x17c044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c044) {
            ctx->pc = 0x17C018u;
            return;
        }
    }
    ctx->pc = 0x17C04Cu;
}
