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

// Function: entry_0011574c
// Address: 0x11574c - 0x115790
void entry_0011574c_0x11574c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011574c_0x11574c");
#endif

    switch (ctx->pc) {
        case 0x115774u: goto label_115774;
        case 0x11577cu: goto label_11577c;
        default: break;
    }

    ctx->pc = 0x11574cu;

    // 0x11574c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115758: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x115758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11575c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x115760: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x115760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x115764: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x115764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x115768: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x115768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x11576c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11576Cu;
    SET_GPR_U32(ctx, 31, 0x115774u);
    ctx->pc = 0x115770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11576Cu;
    // 0x115770: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11576Cu, 0x115774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115774u;
label_115774:
    // 0x115774: 0xc041794  jal         func_105E50
    ctx->pc = 0x115774u;
    SET_GPR_U32(ctx, 31, 0x11577Cu);
    ctx->pc = 0x115778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115774u;
    // 0x115778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x115774u, 0x11577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11577Cu;
label_11577c:
    // 0x11577c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11577cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115780: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x115780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x115784: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x115784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x115788: 0x32f0ffff  andi        $s0, $s7, 0xFFFF
    ctx->pc = 0x115788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x11578c: 0x0  nop
    ctx->pc = 0x11578cu;
    // NOP
    ctx->pc = 0x115790u;
}
