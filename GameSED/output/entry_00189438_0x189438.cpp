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

// Function: entry_00189438
// Address: 0x189438 - 0x189488
void entry_00189438_0x189438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189438_0x189438");
#endif

    ctx->pc = 0x189438u;

    // 0x189438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18943c: 0x8cb2015c  lw          $s2, 0x15C($a1)
    ctx->pc = 0x18943cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x189440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189444: 0x94a20150  lhu         $v0, 0x150($a1)
    ctx->pc = 0x189444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x189448: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x189448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18944c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x18944Cu;
    {
        const bool branch_taken_0x18944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18944Cu;
        // 0x189450: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18944c) {
            ctx->pc = 0x1895A0u;
            return;
        }
    }
    ctx->pc = 0x189454u;
    // 0x189454: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x189454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189458: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x189458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18945c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18945Cu;
    {
        const bool branch_taken_0x18945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18945Cu;
        // 0x189460: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18945c) {
            ctx->pc = 0x189488u;
            return;
        }
    }
    ctx->pc = 0x189464u;
    // 0x189464: 0x8ca2012c  lw          $v0, 0x12C($a1)
    ctx->pc = 0x189464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
    // 0x189468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x189468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18946c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x18946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x189470: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x189470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x189474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189478: 0xaca30130  sw          $v1, 0x130($a1)
    ctx->pc = 0x189478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 3));
    // 0x18947c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18947Cu;
    {
        const bool branch_taken_0x18947c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18947Cu;
        // 0x189480: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18947c) {
            ctx->pc = 0x18959Cu;
            return;
        }
    }
    ctx->pc = 0x189484u;
    // 0x189484: 0x0  nop
    ctx->pc = 0x189484u;
    // NOP
    ctx->pc = 0x189488u;
}
