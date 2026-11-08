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

// Function: entry_001c1924
// Address: 0x1c1924 - 0x1c198c
void entry_001c1924_0x1c1924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1924_0x1c1924");
#endif

    switch (ctx->pc) {
        case 0x1c194cu: goto label_1c194c;
        default: break;
    }

    ctx->pc = 0x1c1924u;

    // 0x1c1924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1928: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1c1928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1c192c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c192cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1930: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1c1930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1934: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1c1934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1938: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c1938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c193c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1c193cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c1940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1944: 0xc070664  jal         func_1C1990
    ctx->pc = 0x1C1944u;
    SET_GPR_U32(ctx, 31, 0x1C194Cu);
    ctx->pc = 0x1C1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1944u;
    // 0x1c1948: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1990u, 0x1C1944u, 0x1C194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C194Cu;
label_1c194c:
    // 0x1c194c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1950: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c1950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1954: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1c1954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1c1958: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1c1958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1c195c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c195cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c1960: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1c1960u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1964: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c1964u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1968: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c1968u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c196c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c196cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1970: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c1970u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1974: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c1974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1978: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c1978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c197c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c197cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1980: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c1980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1984: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1984u;
        // 0x1c1988: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C198Cu;
}
