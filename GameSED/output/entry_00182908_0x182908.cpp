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

// Function: entry_00182908
// Address: 0x182908 - 0x182938
void entry_00182908_0x182908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182908_0x182908");
#endif

    ctx->pc = 0x182908u;

    // 0x182908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18290c: 0x34634d48  ori         $v1, $v1, 0x4D48
    ctx->pc = 0x18290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19784);
    // 0x182910: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x182914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182918: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x182918u;
    {
        const bool branch_taken_0x182918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182918u;
        // 0x18291c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182918) {
            ctx->pc = 0x182938u;
            return;
        }
    }
    ctx->pc = 0x182920u;
    // 0x182920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18292c: 0x805ff44  j           func_17FD10
    ctx->pc = 0x18292Cu;
    ctx->pc = 0x182930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18292Cu;
    // 0x182930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    WHitpolySetupHitPolyLib__FP9WcHitpolyP18WFileBinLinkHeader_0x17fd10(rdram, ctx, runtime); return;
    ctx->pc = 0x182934u;
    // 0x182934: 0x0  nop
    ctx->pc = 0x182934u;
    // NOP
    ctx->pc = 0x182938u;
}
