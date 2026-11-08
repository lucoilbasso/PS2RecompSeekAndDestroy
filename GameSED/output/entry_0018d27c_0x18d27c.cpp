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

// Function: entry_0018d27c
// Address: 0x18d27c - 0x18d2a0
void entry_0018d27c_0x18d27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d27c_0x18d27c");
#endif

    ctx->pc = 0x18d27cu;

    // 0x18d27c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x18d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x18d280: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d284: 0x97c30004  lhu         $v1, 0x4($fp)
    ctx->pc = 0x18d284u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x18d288: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x18d288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d28c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x18d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x18d290: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x18d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x18d294: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d298: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x18D298u;
    {
        const bool branch_taken_0x18d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D298u;
        // 0x18d29c: 0xa7c20004  sh          $v0, 0x4($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d298) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D2A0u;
}
