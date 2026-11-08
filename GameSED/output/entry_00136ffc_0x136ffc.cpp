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

// Function: entry_00136ffc
// Address: 0x136ffc - 0x137008
void entry_00136ffc_0x136ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ffc_0x136ffc");
#endif

    ctx->pc = 0x136ffcu;

    // 0x136ffc: 0x14600139  bnez        $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x136FFCu;
    {
        const bool branch_taken_0x136ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136ffc) {
            ctx->pc = 0x1374E4u;
            return;
        }
    }
    ctx->pc = 0x137004u;
    // 0x137004: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x137004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x137008u;
}
