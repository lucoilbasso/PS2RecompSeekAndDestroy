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

// Function: entry_001bb13c
// Address: 0x1bb13c - 0x1bb19c
void entry_001bb13c_0x1bb13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb13c_0x1bb13c");
#endif

    switch (ctx->pc) {
        case 0x1bb180u: goto label_1bb180;
        default: break;
    }

    ctx->pc = 0x1bb13cu;

    // 0x1bb13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb140: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1bb140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1bb144: 0xae02c0d4  sw          $v0, -0x3F2C($s0)
    ctx->pc = 0x1bb144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24C0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0D4u, _value); } while (0);
    // 0x1bb148: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1bb14c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bb150: 0x3c0b001c  lui         $t3, 0x1C
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28 << 16));
    // 0x1bb154: 0xae22c0b0  sw          $v0, -0x3F50($s1)
    ctx->pc = 0x1bb154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24C0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0B0u, _value); } while (0);
    // 0x1bb158: 0x2484d250  addiu       $a0, $a0, -0x2DB0
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955600));
    // 0x1bb15c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1bb15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1bb160: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bb160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb164: 0x256b9fa0  addiu       $t3, $t3, -0x6060
    ctx->pc = 0x1bb164u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294942624));
    // 0x1bb168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb16c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb170: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1bb170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bb174: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bb174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb178: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BB178u;
    SET_GPR_U32(ctx, 31, 0x1BB180u);
    ctx->pc = 0x1BB17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB178u;
    // 0x1bb17c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BB178u, 0x1BB180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB180u;
label_1bb180:
    // 0x1bb180: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB180u;
    {
        const bool branch_taken_0x1bb180 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb180) {
            ctx->pc = 0x1BB184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB180u;
            // 0x1bb184: 0x8e82c090  lw          $v0, -0x3F70($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB1A4u;
            return;
        }
    }
    ctx->pc = 0x1BB188u;
    // 0x1bb188: 0xae00c0d4  sw          $zero, -0x3F2C($s0)
    ctx->pc = 0x1bb188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951124), GPR_U32(ctx, 0));
    // 0x1bb18c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb190: 0xae20c0b0  sw          $zero, -0x3F50($s1)
    ctx->pc = 0x1bb190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951088), GPR_U32(ctx, 0));
    // 0x1bb194: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB194u;
    SET_GPR_U32(ctx, 31, 0x1BB19Cu);
    ctx->pc = 0x1BB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB194u;
    // 0x1bb198: 0x8c44c0a8  lw          $a0, -0x3F58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB194u, 0x1BB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB19Cu;
}
