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

// Function: entry_00135f54
// Address: 0x135f54 - 0x135f98
void entry_00135f54_0x135f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135f54_0x135f54");
#endif

    ctx->pc = 0x135f54u;

    // 0x135f54: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x135f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x135f58: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x135f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x135f5c: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x135f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x135f60: 0x24701400  addiu       $s0, $v1, 0x1400
    ctx->pc = 0x135f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x135f64: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x135f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x135f68: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x135F68u;
    {
        const bool branch_taken_0x135f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x135F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F68u;
        // 0x135f6c: 0xac621400  sw          $v0, 0x1400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f68) {
            ctx->pc = 0x135F98u;
            return;
        }
    }
    ctx->pc = 0x135F70u;
    // 0x135f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135f78: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x135f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x135f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135f84: 0x24a56678  addiu       $a1, $a1, 0x6678
    ctx->pc = 0x135f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26232));
    // 0x135f88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x135f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135f8c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x135f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x135f90: 0x8068186  j           func_1A0618
    ctx->pc = 0x135F90u;
    ctx->pc = 0x135F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F90u;
    // 0x135f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x135F98u;
}
