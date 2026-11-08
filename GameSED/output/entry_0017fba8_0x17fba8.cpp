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

// Function: entry_0017fba8
// Address: 0x17fba8 - 0x17fbd8
void entry_0017fba8_0x17fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fba8_0x17fba8");
#endif

    ctx->pc = 0x17fba8u;

    // 0x17fba8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17fbac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17fbb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17fbb4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17fbb8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17fbbc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17fbc0: 0x8e760020  lw          $s6, 0x20($s3)
    ctx->pc = 0x17fbc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17fbc4: 0x8e71001c  lw          $s1, 0x1C($s3)
    ctx->pc = 0x17fbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x17fbc8: 0xa6160022  sh          $s6, 0x22($s0)
    ctx->pc = 0x17fbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 22));
    // 0x17fbcc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FBCCu;
    {
        const bool branch_taken_0x17fbcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBCCu;
        // 0x17fbd0: 0x162980  sll         $a1, $s6, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbcc) {
            ctx->pc = 0x17FBD8u;
            return;
        }
    }
    ctx->pc = 0x17FBD4u;
    // 0x17fbd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17fbd8u;
}
