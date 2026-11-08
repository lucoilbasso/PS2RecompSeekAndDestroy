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

// Function: entry_00189858
// Address: 0x189858 - 0x18989c
void entry_00189858_0x189858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189858_0x189858");
#endif

    ctx->pc = 0x189858u;

    // 0x189858: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x189858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x18985c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x18985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x189860: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x189860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x189864: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x189864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x189868: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x189868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x18986c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x18986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x189870: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x189870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x189874: 0x8e360150  lw          $s6, 0x150($s1)
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x189878: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x189878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18987c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x18987cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x189880: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x189880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x189884: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x189888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18988c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18988Cu;
    {
        const bool branch_taken_0x18988c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x189890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18988Cu;
        // 0x189890: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18988c) {
            ctx->pc = 0x18989Cu;
            return;
        }
    }
    ctx->pc = 0x189894u;
    // 0x189894: 0xc061920  jal         func_186480
    ctx->pc = 0x189894u;
    SET_GPR_U32(ctx, 31, 0x18989Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x189894u, 0x18989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18989Cu;
}
