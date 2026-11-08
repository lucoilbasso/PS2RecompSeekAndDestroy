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

// Function: entry_001b9b44
// Address: 0x1b9b44 - 0x1b9b98
void entry_001b9b44_0x1b9b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9b44_0x1b9b44");
#endif

    switch (ctx->pc) {
        case 0x1b9b8cu: goto label_1b9b8c;
        default: break;
    }

    ctx->pc = 0x1b9b44u;

    // 0x1b9b44: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b9b48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b9b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b9b4c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1b9b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b9b50: 0x2450d600  addiu       $s0, $v0, -0x2A00
    ctx->pc = 0x1b9b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x1b9b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b9b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b9b58: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b9b58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x40D604u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40D604u, _value); } while (0);
    // 0x1b9b5c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b9b60: 0xac46d600  sw          $a2, -0x2A00($v0)
    ctx->pc = 0x1b9b60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x40D600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40D600u, _value); } while (0);
    // 0x1b9b64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9b68: 0x2464d3c0  addiu       $a0, $v1, -0x2C40
    ctx->pc = 0x1b9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955968));
    // 0x1b9b6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b9b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b78: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1b9b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9b7c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b9b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b80: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b9b80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9b84: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B9B84u;
    SET_GPR_U32(ctx, 31, 0x1B9B8Cu);
    ctx->pc = 0x1B9B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B84u;
    // 0x1b9b88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B9B84u, 0x1B9B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B8Cu;
label_1b9b8c:
    // 0x1b9b8c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9B8Cu;
    {
        const bool branch_taken_0x1b9b8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b9b8c) {
            ctx->pc = 0x1B9B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B8Cu;
            // 0x1b9b90: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B98u;
            return;
        }
    }
    ctx->pc = 0x1B9B94u;
    // 0x1b9b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9b98u;
}
