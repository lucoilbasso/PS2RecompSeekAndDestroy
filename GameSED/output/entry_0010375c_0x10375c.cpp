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

// Function: entry_0010375c
// Address: 0x10375c - 0x1037a8
void entry_0010375c_0x10375c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010375c_0x10375c");
#endif

    ctx->pc = 0x10375cu;

    // 0x10375c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103760: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x103760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103768: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10376c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x103770: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x103770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x103774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103778: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x103778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10377c: 0x640000a  bltz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x10377Cu;
    {
        const bool branch_taken_0x10377c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x103780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10377Cu;
        // 0x103780: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10377c) {
            ctx->pc = 0x1037A8u;
            return;
        }
    }
    ctx->pc = 0x103784u;
    // 0x103784: 0x32520003  andi        $s2, $s2, 0x3
    ctx->pc = 0x103784u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x103788: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x103788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10378c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103790: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x103790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x103794: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x103794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x103798: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x103798u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10379c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x10379cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1037a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1037A0u;
    {
        const bool branch_taken_0x1037a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A0u;
        // 0x1037a4: 0x39883  sra         $s3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037a0) {
            ctx->pc = 0x1037ACu;
            return;
        }
    }
    ctx->pc = 0x1037A8u;
}
