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

// Function: entry_0015590c
// Address: 0x15590c - 0x155948
void entry_0015590c_0x15590c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015590c_0x15590c");
#endif

    ctx->pc = 0x15590cu;

    // 0x15590c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x15590Cu;
    {
        const bool branch_taken_0x15590c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x155910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15590Cu;
        // 0x155910: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15590c) {
            ctx->pc = 0x155948u;
            return;
        }
    }
    ctx->pc = 0x155914u;
    // 0x155914: 0x8e450310  lw          $a1, 0x310($s2)
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
    // 0x155918: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x155918u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x15591c: 0xb00018  mult        $zero, $a1, $s0
    ctx->pc = 0x15591cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x155920: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x155920u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x155924: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x155924u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x155928: 0x8e440690  lw          $a0, 0x690($s2)
    ctx->pc = 0x155928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x15592c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15592cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155938: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x155938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15593c: 0x80585a2  j           func_161688
    ctx->pc = 0x15593Cu;
    ctx->pc = 0x155940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15593Cu;
    // 0x155940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161688u;
    UpDownGunDirection__9ApcCqtanki_0x161688(rdram, ctx, runtime); return;
    ctx->pc = 0x155944u;
    // 0x155944: 0x0  nop
    ctx->pc = 0x155944u;
    // NOP
    ctx->pc = 0x155948u;
}
