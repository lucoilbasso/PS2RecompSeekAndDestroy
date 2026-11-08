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

// Function: entry_00137938
// Address: 0x137938 - 0x137944
void entry_00137938_0x137938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137938_0x137938");
#endif

    ctx->pc = 0x137938u;

    // 0x137938: 0x14800046  bnez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x137938u;
    {
        const bool branch_taken_0x137938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x137938) {
            ctx->pc = 0x137A54u;
            return;
        }
    }
    ctx->pc = 0x137940u;
    // 0x137940: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x137940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x137944u;
}
