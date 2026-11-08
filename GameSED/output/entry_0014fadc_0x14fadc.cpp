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

// Function: entry_0014fadc
// Address: 0x14fadc - 0x14fafc
void entry_0014fadc_0x14fadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fadc_0x14fadc");
#endif

    ctx->pc = 0x14fadcu;

    // 0x14fadc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x14fae0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14fae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14fae4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14FAE4u;
    {
        const bool branch_taken_0x14fae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fae4) {
            ctx->pc = 0x14FAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FAE4u;
            // 0x14fae8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            return;
        }
    }
    ctx->pc = 0x14FAECu;
    // 0x14faec: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x14faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14faf0: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x14faf4: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x14faf4u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x14faf8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x14fafcu;
}
