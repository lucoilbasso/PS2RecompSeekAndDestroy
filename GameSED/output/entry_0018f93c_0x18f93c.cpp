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

// Function: entry_0018f93c
// Address: 0x18f93c - 0x18f9ac
void entry_0018f93c_0x18f93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f93c_0x18f93c");
#endif

    ctx->pc = 0x18f93cu;

    // 0x18f93c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x18f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x18f940: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x18f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x18f944: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x18f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x18f948: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x18f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x18f94c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x18f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x18f950: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x18f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x18f954: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x18f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x18f958: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x18f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x18f95c: 0x94c50008  lhu         $a1, 0x8($a2)
    ctx->pc = 0x18f95cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x18f960: 0x96220158  lhu         $v0, 0x158($s1)
    ctx->pc = 0x18f960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x18f964: 0xafb100f4  sw          $s1, 0xF4($sp)
    ctx->pc = 0x18f964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 17));
    // 0x18f968: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18f96c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x18f96cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f970: 0x30a60100  andi        $a2, $a1, 0x100
    ctx->pc = 0x18f970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x18f974: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x18f974u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f978: 0x30a50800  andi        $a1, $a1, 0x800
    ctx->pc = 0x18f978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x18f97c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x18f97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x18f980: 0x5982b  sltu        $s3, $zero, $a1
    ctx->pc = 0x18f980u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x18f984: 0x3f02b  sltu        $fp, $zero, $v1
    ctx->pc = 0x18f984u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18f988: 0x12800079  beqz        $s4, . + 4 + (0x79 << 2)
    ctx->pc = 0x18F988u;
    {
        const bool branch_taken_0x18f988 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F988u;
        // 0x18f98c: 0x6b82b  sltu        $s7, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f988) {
            ctx->pc = 0x18FB70u;
            return;
        }
    }
    ctx->pc = 0x18F990u;
    // 0x18f990: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x18f990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18f994: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x18f994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18f998: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18f998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x18f99c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F99Cu;
    {
        const bool branch_taken_0x18f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f99c) {
            ctx->pc = 0x18F9ACu;
            return;
        }
    }
    ctx->pc = 0x18F9A4u;
    // 0x18f9a4: 0xc061920  jal         func_186480
    ctx->pc = 0x18F9A4u;
    SET_GPR_U32(ctx, 31, 0x18F9ACu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18F9A4u, 0x18F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9ACu;
}
